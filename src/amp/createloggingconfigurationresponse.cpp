// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggingconfigurationresponse.h"
#include "createloggingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateLoggingConfigurationResponse
 * \brief The CreateLoggingConfigurationResponse class provides an interace for Amp CreateLoggingConfiguration responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createLoggingConfiguration
 */

/*!
 * Constructs a CreateLoggingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLoggingConfigurationResponse::CreateLoggingConfigurationResponse(
        const CreateLoggingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new CreateLoggingConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateLoggingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLoggingConfigurationRequest * CreateLoggingConfigurationResponse::request() const
{
    Q_D(const CreateLoggingConfigurationResponse);
    return static_cast<const CreateLoggingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp CreateLoggingConfiguration \a response.
 */
void CreateLoggingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLoggingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::CreateLoggingConfigurationResponsePrivate
 * \brief The CreateLoggingConfigurationResponsePrivate class provides private implementation for CreateLoggingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateLoggingConfigurationResponsePrivate object with public implementation \a q.
 */
CreateLoggingConfigurationResponsePrivate::CreateLoggingConfigurationResponsePrivate(
    CreateLoggingConfigurationResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp CreateLoggingConfiguration response element from \a xml.
 */
void CreateLoggingConfigurationResponsePrivate::parseCreateLoggingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
