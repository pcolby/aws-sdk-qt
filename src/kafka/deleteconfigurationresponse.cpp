// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
