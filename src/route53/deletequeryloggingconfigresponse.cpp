/*
    Copyright 2013-2018 Paul Colby

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

#include "deletequeryloggingconfigresponse.h"
#include "deletequeryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigResponse
 * \brief The DeleteQueryLoggingConfigResponse class provides an interace for Route53 DeleteQueryLoggingConfig responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteQueryLoggingConfig
 */

/*!
 * Constructs a DeleteQueryLoggingConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQueryLoggingConfigResponse::DeleteQueryLoggingConfigResponse(
        const DeleteQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteQueryLoggingConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQueryLoggingConfigRequest * DeleteQueryLoggingConfigResponse::request() const
{
    Q_D(const DeleteQueryLoggingConfigResponse);
    return static_cast<const DeleteQueryLoggingConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteQueryLoggingConfig \a response.
 */
void DeleteQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigResponsePrivate
 * \brief The DeleteQueryLoggingConfigResponsePrivate class provides private implementation for DeleteQueryLoggingConfigResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteQueryLoggingConfigResponsePrivate object with public implementation \a q.
 */
DeleteQueryLoggingConfigResponsePrivate::DeleteQueryLoggingConfigResponsePrivate(
    DeleteQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteQueryLoggingConfig response element from \a xml.
 */
void DeleteQueryLoggingConfigResponsePrivate::parseDeleteQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueryLoggingConfigResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
