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

#include "createaccesspointforobjectlambdaresponse.h"
#include "createaccesspointforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaResponse
 * \brief The CreateAccessPointForObjectLambdaResponse class provides an interace for S3Control CreateAccessPointForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPointForObjectLambda
 */

/*!
 * Constructs a CreateAccessPointForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPointForObjectLambdaResponse::CreateAccessPointForObjectLambdaResponse(
        const CreateAccessPointForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateAccessPointForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPointForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPointForObjectLambdaRequest * CreateAccessPointForObjectLambdaResponse::request() const
{
    Q_D(const CreateAccessPointForObjectLambdaResponse);
    return static_cast<const CreateAccessPointForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control CreateAccessPointForObjectLambda \a response.
 */
void CreateAccessPointForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPointForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaResponsePrivate
 * \brief The CreateAccessPointForObjectLambdaResponsePrivate class provides private implementation for CreateAccessPointForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointForObjectLambdaResponsePrivate object with public implementation \a q.
 */
CreateAccessPointForObjectLambdaResponsePrivate::CreateAccessPointForObjectLambdaResponsePrivate(
    CreateAccessPointForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateAccessPointForObjectLambda response element from \a xml.
 */
void CreateAccessPointForObjectLambdaResponsePrivate::parseCreateAccessPointForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPointForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
