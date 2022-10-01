// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloggingconfigurationresponse.h"
#include "deleteloggingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteLoggingConfigurationResponse
 * \brief The DeleteLoggingConfigurationResponse class provides an interace for Amp DeleteLoggingConfiguration responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteLoggingConfiguration
 */

/*!
 * Constructs a DeleteLoggingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLoggingConfigurationResponse::DeleteLoggingConfigurationResponse(
        const DeleteLoggingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DeleteLoggingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteLoggingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLoggingConfigurationRequest * DeleteLoggingConfigurationResponse::request() const
{
    Q_D(const DeleteLoggingConfigurationResponse);
    return static_cast<const DeleteLoggingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DeleteLoggingConfiguration \a response.
 */
void DeleteLoggingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLoggingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DeleteLoggingConfigurationResponsePrivate
 * \brief The DeleteLoggingConfigurationResponsePrivate class provides private implementation for DeleteLoggingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteLoggingConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteLoggingConfigurationResponsePrivate::DeleteLoggingConfigurationResponsePrivate(
    DeleteLoggingConfigurationResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DeleteLoggingConfiguration response element from \a xml.
 */
void DeleteLoggingConfigurationResponsePrivate::parseDeleteLoggingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoggingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
