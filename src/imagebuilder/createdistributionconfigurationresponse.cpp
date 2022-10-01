// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdistributionconfigurationresponse.h"
#include "createdistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationResponse
 * \brief The CreateDistributionConfigurationResponse class provides an interace for ImageBuilder CreateDistributionConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createDistributionConfiguration
 */

/*!
 * Constructs a CreateDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDistributionConfigurationResponse::CreateDistributionConfigurationResponse(
        const CreateDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDistributionConfigurationRequest * CreateDistributionConfigurationResponse::request() const
{
    Q_D(const CreateDistributionConfigurationResponse);
    return static_cast<const CreateDistributionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateDistributionConfiguration \a response.
 */
void CreateDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationResponsePrivate
 * \brief The CreateDistributionConfigurationResponsePrivate class provides private implementation for CreateDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
CreateDistributionConfigurationResponsePrivate::CreateDistributionConfigurationResponsePrivate(
    CreateDistributionConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateDistributionConfiguration response element from \a xml.
 */
void CreateDistributionConfigurationResponsePrivate::parseCreateDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
