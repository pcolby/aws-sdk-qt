// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkerconfigurationresponse.h"
#include "createworkerconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateWorkerConfigurationResponse
 * \brief The CreateWorkerConfigurationResponse class provides an interace for KafkaConnect CreateWorkerConfiguration responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createWorkerConfiguration
 */

/*!
 * Constructs a CreateWorkerConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkerConfigurationResponse::CreateWorkerConfigurationResponse(
        const CreateWorkerConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new CreateWorkerConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateWorkerConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkerConfigurationRequest * CreateWorkerConfigurationResponse::request() const
{
    Q_D(const CreateWorkerConfigurationResponse);
    return static_cast<const CreateWorkerConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect CreateWorkerConfiguration \a response.
 */
void CreateWorkerConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkerConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::CreateWorkerConfigurationResponsePrivate
 * \brief The CreateWorkerConfigurationResponsePrivate class provides private implementation for CreateWorkerConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateWorkerConfigurationResponsePrivate object with public implementation \a q.
 */
CreateWorkerConfigurationResponsePrivate::CreateWorkerConfigurationResponsePrivate(
    CreateWorkerConfigurationResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect CreateWorkerConfiguration response element from \a xml.
 */
void CreateWorkerConfigurationResponsePrivate::parseCreateWorkerConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkerConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
