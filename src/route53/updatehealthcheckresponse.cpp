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

#include "updatehealthcheckresponse.h"
#include "updatehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHealthCheckResponse
 * \brief The UpdateHealthCheckResponse class provides an interace for Route53 UpdateHealthCheck responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::updateHealthCheck
 */

/*!
 * Constructs a UpdateHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHealthCheckResponse::UpdateHealthCheckResponse(
        const UpdateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new UpdateHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHealthCheckRequest * UpdateHealthCheckResponse::request() const
{
    Q_D(const UpdateHealthCheckResponse);
    return static_cast<const UpdateHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 UpdateHealthCheck \a response.
 */
void UpdateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::UpdateHealthCheckResponsePrivate
 * \brief The UpdateHealthCheckResponsePrivate class provides private implementation for UpdateHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateHealthCheckResponsePrivate object with public implementation \a q.
 */
UpdateHealthCheckResponsePrivate::UpdateHealthCheckResponsePrivate(
    UpdateHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 UpdateHealthCheck response element from \a xml.
 */
void UpdateHealthCheckResponsePrivate::parseUpdateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
