/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createaccesspointresponse.h"
#include "createaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointResponse
 * \brief The CreateAccessPointResponse class provides an interace for S3Control CreateAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPoint
 */

/*!
 * Constructs a CreateAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPointResponse::CreateAccessPointResponse(
        const CreateAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateAccessPointResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPointRequest * CreateAccessPointResponse::request() const
{
    return static_cast<const CreateAccessPointRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control CreateAccessPoint \a response.
 */
void CreateAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateAccessPointResponsePrivate
 * \brief The CreateAccessPointResponsePrivate class provides private implementation for CreateAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointResponsePrivate object with public implementation \a q.
 */
CreateAccessPointResponsePrivate::CreateAccessPointResponsePrivate(
    CreateAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateAccessPoint response element from \a xml.
 */
void CreateAccessPointResponsePrivate::parseCreateAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
