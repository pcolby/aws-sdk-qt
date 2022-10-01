// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinfrastructureconfigurationresponse.h"
#include "updateinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationResponse
 * \brief The UpdateInfrastructureConfigurationResponse class provides an interace for ImageBuilder UpdateInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateInfrastructureConfiguration
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInfrastructureConfigurationResponse::UpdateInfrastructureConfigurationResponse(
        const UpdateInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new UpdateInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInfrastructureConfigurationRequest * UpdateInfrastructureConfigurationResponse::request() const
{
    Q_D(const UpdateInfrastructureConfigurationResponse);
    return static_cast<const UpdateInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder UpdateInfrastructureConfiguration \a response.
 */
void UpdateInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationResponsePrivate
 * \brief The UpdateInfrastructureConfigurationResponsePrivate class provides private implementation for UpdateInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateInfrastructureConfigurationResponsePrivate::UpdateInfrastructureConfigurationResponsePrivate(
    UpdateInfrastructureConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder UpdateInfrastructureConfiguration response element from \a xml.
 */
void UpdateInfrastructureConfigurationResponsePrivate::parseUpdateInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
