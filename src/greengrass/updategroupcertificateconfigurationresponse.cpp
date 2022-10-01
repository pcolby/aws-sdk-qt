// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategroupcertificateconfigurationresponse.h"
#include "updategroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationResponse
 * \brief The UpdateGroupCertificateConfigurationResponse class provides an interace for Greengrass UpdateGroupCertificateConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateGroupCertificateConfiguration
 */

/*!
 * Constructs a UpdateGroupCertificateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGroupCertificateConfigurationResponse::UpdateGroupCertificateConfigurationResponse(
        const UpdateGroupCertificateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGroupCertificateConfigurationRequest * UpdateGroupCertificateConfigurationResponse::request() const
{
    Q_D(const UpdateGroupCertificateConfigurationResponse);
    return static_cast<const UpdateGroupCertificateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateGroupCertificateConfiguration \a response.
 */
void UpdateGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGroupCertificateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationResponsePrivate
 * \brief The UpdateGroupCertificateConfigurationResponsePrivate class provides private implementation for UpdateGroupCertificateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateGroupCertificateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateGroupCertificateConfigurationResponsePrivate::UpdateGroupCertificateConfigurationResponsePrivate(
    UpdateGroupCertificateConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateGroupCertificateConfiguration response element from \a xml.
 */
void UpdateGroupCertificateConfigurationResponsePrivate::parseUpdateGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupCertificateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
