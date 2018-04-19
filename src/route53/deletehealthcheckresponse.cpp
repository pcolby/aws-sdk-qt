/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletehealthcheckresponse.h"
#include "deletehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHealthCheckResponse
 * \brief The DeleteHealthCheckResponse class provides an interace for Route53 DeleteHealthCheck responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteHealthCheck
 */

/*!
 * Constructs a DeleteHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHealthCheckResponse::DeleteHealthCheckResponse(
        const DeleteHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteHealthCheckResponsePrivate(this), parent)
{
    setRequest(new DeleteHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHealthCheckRequest * DeleteHealthCheckResponse::request() const
{
    Q_D(const DeleteHealthCheckResponse);
    return static_cast<const DeleteHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteHealthCheck \a response.
 */
void DeleteHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteHealthCheckResponsePrivate
 * \brief The DeleteHealthCheckResponsePrivate class provides private implementation for DeleteHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHealthCheckResponsePrivate object with public implementation \a q.
 */
DeleteHealthCheckResponsePrivate::DeleteHealthCheckResponsePrivate(
    DeleteHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteHealthCheck response element from \a xml.
 */
void DeleteHealthCheckResponsePrivate::parseDeleteHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
