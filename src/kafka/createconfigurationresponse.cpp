// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationresponse.h"
#include "createconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateConfigurationResponse
 * \brief The CreateConfigurationResponse class provides an interace for Kafka CreateConfiguration responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createConfiguration
 */

/*!
 * Constructs a CreateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationResponse::CreateConfigurationResponse(
        const CreateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new CreateConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationRequest * CreateConfigurationResponse::request() const
{
    Q_D(const CreateConfigurationResponse);
    return static_cast<const CreateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka CreateConfiguration \a response.
 */
void CreateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::CreateConfigurationResponsePrivate
 * \brief The CreateConfigurationResponsePrivate class provides private implementation for CreateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateConfigurationResponsePrivate object with public implementation \a q.
 */
CreateConfigurationResponsePrivate::CreateConfigurationResponsePrivate(
    CreateConfigurationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka CreateConfiguration response element from \a xml.
 */
void CreateConfigurationResponsePrivate::parseCreateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
