// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinfrastructureconfigurationresponse.h"
#include "deleteinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationResponse
 * \brief The DeleteInfrastructureConfigurationResponse class provides an interace for ImageBuilder DeleteInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteInfrastructureConfiguration
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInfrastructureConfigurationResponse::DeleteInfrastructureConfigurationResponse(
        const DeleteInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInfrastructureConfigurationRequest * DeleteInfrastructureConfigurationResponse::request() const
{
    Q_D(const DeleteInfrastructureConfigurationResponse);
    return static_cast<const DeleteInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteInfrastructureConfiguration \a response.
 */
void DeleteInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationResponsePrivate
 * \brief The DeleteInfrastructureConfigurationResponsePrivate class provides private implementation for DeleteInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteInfrastructureConfigurationResponsePrivate::DeleteInfrastructureConfigurationResponsePrivate(
    DeleteInfrastructureConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteInfrastructureConfiguration response element from \a xml.
 */
void DeleteInfrastructureConfigurationResponsePrivate::parseDeleteInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
