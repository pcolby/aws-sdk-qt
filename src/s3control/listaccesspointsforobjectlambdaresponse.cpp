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

#include "listaccesspointsforobjectlambdaresponse.h"
#include "listaccesspointsforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaResponse
 * \brief The ListAccessPointsForObjectLambdaResponse class provides an interace for S3Control ListAccessPointsForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPointsForObjectLambda
 */

/*!
 * Constructs a ListAccessPointsForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessPointsForObjectLambdaResponse::ListAccessPointsForObjectLambdaResponse(
        const ListAccessPointsForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListAccessPointsForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new ListAccessPointsForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessPointsForObjectLambdaRequest * ListAccessPointsForObjectLambdaResponse::request() const
{
    return static_cast<const ListAccessPointsForObjectLambdaRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control ListAccessPointsForObjectLambda \a response.
 */
void ListAccessPointsForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessPointsForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaResponsePrivate
 * \brief The ListAccessPointsForObjectLambdaResponsePrivate class provides private implementation for ListAccessPointsForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsForObjectLambdaResponsePrivate object with public implementation \a q.
 */
ListAccessPointsForObjectLambdaResponsePrivate::ListAccessPointsForObjectLambdaResponsePrivate(
    ListAccessPointsForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListAccessPointsForObjectLambda response element from \a xml.
 */
void ListAccessPointsForObjectLambdaResponsePrivate::parseListAccessPointsForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessPointsForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
