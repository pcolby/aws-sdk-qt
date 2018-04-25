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

#include "createqueryloggingconfigresponse.h"
#include "createqueryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigResponse
 * \brief The CreateQueryLoggingConfigResponse class provides an interace for Route53 CreateQueryLoggingConfig responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createQueryLoggingConfig
 */

/*!
 * Constructs a CreateQueryLoggingConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQueryLoggingConfigResponse::CreateQueryLoggingConfigResponse(
        const CreateQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new CreateQueryLoggingConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQueryLoggingConfigRequest * CreateQueryLoggingConfigResponse::request() const
{
    Q_D(const CreateQueryLoggingConfigResponse);
    return static_cast<const CreateQueryLoggingConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateQueryLoggingConfig \a response.
 */
void CreateQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigResponsePrivate
 * \brief The CreateQueryLoggingConfigResponsePrivate class provides private implementation for CreateQueryLoggingConfigResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateQueryLoggingConfigResponsePrivate object with public implementation \a q.
 */
CreateQueryLoggingConfigResponsePrivate::CreateQueryLoggingConfigResponsePrivate(
    CreateQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateQueryLoggingConfig response element from \a xml.
 */
void CreateQueryLoggingConfigResponsePrivate::parseCreateQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueryLoggingConfigResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
