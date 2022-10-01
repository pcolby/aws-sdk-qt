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

#include "deleteaccesspointforobjectlambdaresponse.h"
#include "deleteaccesspointforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointForObjectLambdaResponse
 * \brief The DeleteAccessPointForObjectLambdaResponse class provides an interace for S3Control DeleteAccessPointForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointForObjectLambda
 */

/*!
 * Constructs a DeleteAccessPointForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointForObjectLambdaResponse::DeleteAccessPointForObjectLambdaResponse(
        const DeleteAccessPointForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteAccessPointForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointForObjectLambdaRequest * DeleteAccessPointForObjectLambdaResponse::request() const
{
    Q_D(const DeleteAccessPointForObjectLambdaResponse);
    return static_cast<const DeleteAccessPointForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteAccessPointForObjectLambda \a response.
 */
void DeleteAccessPointForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointForObjectLambdaResponsePrivate
 * \brief The DeleteAccessPointForObjectLambdaResponsePrivate class provides private implementation for DeleteAccessPointForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointForObjectLambdaResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointForObjectLambdaResponsePrivate::DeleteAccessPointForObjectLambdaResponsePrivate(
    DeleteAccessPointForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteAccessPointForObjectLambda response element from \a xml.
 */
void DeleteAccessPointForObjectLambdaResponsePrivate::parseDeleteAccessPointForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
