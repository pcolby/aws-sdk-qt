// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdistributionconfigurationresponse.h"
#include "getdistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetDistributionConfigurationResponse
 * \brief The GetDistributionConfigurationResponse class provides an interace for ImageBuilder GetDistributionConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getDistributionConfiguration
 */

/*!
 * Constructs a GetDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDistributionConfigurationResponse::GetDistributionConfigurationResponse(
        const GetDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDistributionConfigurationRequest * GetDistributionConfigurationResponse::request() const
{
    Q_D(const GetDistributionConfigurationResponse);
    return static_cast<const GetDistributionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetDistributionConfiguration \a response.
 */
void GetDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetDistributionConfigurationResponsePrivate
 * \brief The GetDistributionConfigurationResponsePrivate class provides private implementation for GetDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
GetDistributionConfigurationResponsePrivate::GetDistributionConfigurationResponsePrivate(
    GetDistributionConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetDistributionConfiguration response element from \a xml.
 */
void GetDistributionConfigurationResponsePrivate::parseGetDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
