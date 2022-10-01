// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupcertificateconfigurationresponse.h"
#include "getgroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationResponse
 * \brief The GetGroupCertificateConfigurationResponse class provides an interace for Greengrass GetGroupCertificateConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupCertificateConfiguration
 */

/*!
 * Constructs a GetGroupCertificateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupCertificateConfigurationResponse::GetGroupCertificateConfigurationResponse(
        const GetGroupCertificateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupCertificateConfigurationRequest * GetGroupCertificateConfigurationResponse::request() const
{
    Q_D(const GetGroupCertificateConfigurationResponse);
    return static_cast<const GetGroupCertificateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetGroupCertificateConfiguration \a response.
 */
void GetGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupCertificateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationResponsePrivate
 * \brief The GetGroupCertificateConfigurationResponsePrivate class provides private implementation for GetGroupCertificateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupCertificateConfigurationResponsePrivate object with public implementation \a q.
 */
GetGroupCertificateConfigurationResponsePrivate::GetGroupCertificateConfigurationResponsePrivate(
    GetGroupCertificateConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetGroupCertificateConfiguration response element from \a xml.
 */
void GetGroupCertificateConfigurationResponsePrivate::parseGetGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupCertificateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
