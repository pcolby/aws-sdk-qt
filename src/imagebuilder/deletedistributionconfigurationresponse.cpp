// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedistributionconfigurationresponse.h"
#include "deletedistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationResponse
 * \brief The DeleteDistributionConfigurationResponse class provides an interace for ImageBuilder DeleteDistributionConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteDistributionConfiguration
 */

/*!
 * Constructs a DeleteDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDistributionConfigurationResponse::DeleteDistributionConfigurationResponse(
        const DeleteDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDistributionConfigurationRequest * DeleteDistributionConfigurationResponse::request() const
{
    Q_D(const DeleteDistributionConfigurationResponse);
    return static_cast<const DeleteDistributionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteDistributionConfiguration \a response.
 */
void DeleteDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationResponsePrivate
 * \brief The DeleteDistributionConfigurationResponsePrivate class provides private implementation for DeleteDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteDistributionConfigurationResponsePrivate::DeleteDistributionConfigurationResponsePrivate(
    DeleteDistributionConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteDistributionConfiguration response element from \a xml.
 */
void DeleteDistributionConfigurationResponsePrivate::parseDeleteDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
