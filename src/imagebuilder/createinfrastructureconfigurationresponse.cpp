// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinfrastructureconfigurationresponse.h"
#include "createinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateInfrastructureConfigurationResponse
 * \brief The CreateInfrastructureConfigurationResponse class provides an interace for ImageBuilder CreateInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createInfrastructureConfiguration
 */

/*!
 * Constructs a CreateInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInfrastructureConfigurationResponse::CreateInfrastructureConfigurationResponse(
        const CreateInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInfrastructureConfigurationRequest * CreateInfrastructureConfigurationResponse::request() const
{
    Q_D(const CreateInfrastructureConfigurationResponse);
    return static_cast<const CreateInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateInfrastructureConfiguration \a response.
 */
void CreateInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateInfrastructureConfigurationResponsePrivate
 * \brief The CreateInfrastructureConfigurationResponsePrivate class provides private implementation for CreateInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
CreateInfrastructureConfigurationResponsePrivate::CreateInfrastructureConfigurationResponsePrivate(
    CreateInfrastructureConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateInfrastructureConfiguration response element from \a xml.
 */
void CreateInfrastructureConfigurationResponsePrivate::parseCreateInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
