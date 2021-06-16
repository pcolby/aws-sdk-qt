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

#include "deleteconfigurationresponse.h"
#include "deleteconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DeleteConfigurationResponse
 * \brief The DeleteConfigurationResponse class provides an interace for Kafka DeleteConfiguration responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::deleteConfiguration
 */

/*!
 * Constructs a DeleteConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationResponse::DeleteConfigurationResponse(
        const DeleteConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DeleteConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationRequest * DeleteConfigurationResponse::request() const
{
    Q_D(const DeleteConfigurationResponse);
    return static_cast<const DeleteConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka DeleteConfiguration \a response.
 */
void DeleteConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DeleteConfigurationResponsePrivate
 * \brief The DeleteConfigurationResponsePrivate class provides private implementation for DeleteConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DeleteConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationResponsePrivate::DeleteConfigurationResponsePrivate(
    DeleteConfigurationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DeleteConfiguration response element from \a xml.
 */
void DeleteConfigurationResponsePrivate::parseDeleteConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
