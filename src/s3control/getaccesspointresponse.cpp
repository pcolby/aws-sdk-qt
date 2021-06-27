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

#include "getaccesspointresponse.h"
#include "getaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointResponse
 * \brief The GetAccessPointResponse class provides an interace for S3Control GetAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPoint
 */

/*!
 * Constructs a GetAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointResponse::GetAccessPointResponse(
        const GetAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointRequest * GetAccessPointResponse::request() const
{
    return static_cast<const GetAccessPointRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPoint \a response.
 */
void GetAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointResponsePrivate
 * \brief The GetAccessPointResponsePrivate class provides private implementation for GetAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointResponsePrivate object with public implementation \a q.
 */
GetAccessPointResponsePrivate::GetAccessPointResponsePrivate(
    GetAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPoint response element from \a xml.
 */
void GetAccessPointResponsePrivate::parseGetAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
