// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloggingconfigurationresponse.h"
#include "updateloggingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::UpdateLoggingConfigurationResponse
 * \brief The UpdateLoggingConfigurationResponse class provides an interace for Amp UpdateLoggingConfiguration responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::updateLoggingConfiguration
 */

/*!
 * Constructs a UpdateLoggingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLoggingConfigurationResponse::UpdateLoggingConfigurationResponse(
        const UpdateLoggingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new UpdateLoggingConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateLoggingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLoggingConfigurationRequest * UpdateLoggingConfigurationResponse::request() const
{
    Q_D(const UpdateLoggingConfigurationResponse);
    return static_cast<const UpdateLoggingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp UpdateLoggingConfiguration \a response.
 */
void UpdateLoggingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLoggingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::UpdateLoggingConfigurationResponsePrivate
 * \brief The UpdateLoggingConfigurationResponsePrivate class provides private implementation for UpdateLoggingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a UpdateLoggingConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateLoggingConfigurationResponsePrivate::UpdateLoggingConfigurationResponsePrivate(
    UpdateLoggingConfigurationResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp UpdateLoggingConfiguration response element from \a xml.
 */
void UpdateLoggingConfigurationResponsePrivate::parseUpdateLoggingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLoggingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
