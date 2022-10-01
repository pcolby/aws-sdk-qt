// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinfrastructureconfigurationsresponse.h"
#include "listinfrastructureconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListInfrastructureConfigurationsResponse
 * \brief The ListInfrastructureConfigurationsResponse class provides an interace for ImageBuilder ListInfrastructureConfigurations responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listInfrastructureConfigurations
 */

/*!
 * Constructs a ListInfrastructureConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInfrastructureConfigurationsResponse::ListInfrastructureConfigurationsResponse(
        const ListInfrastructureConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListInfrastructureConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListInfrastructureConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInfrastructureConfigurationsRequest * ListInfrastructureConfigurationsResponse::request() const
{
    Q_D(const ListInfrastructureConfigurationsResponse);
    return static_cast<const ListInfrastructureConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListInfrastructureConfigurations \a response.
 */
void ListInfrastructureConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInfrastructureConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListInfrastructureConfigurationsResponsePrivate
 * \brief The ListInfrastructureConfigurationsResponsePrivate class provides private implementation for ListInfrastructureConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListInfrastructureConfigurationsResponsePrivate object with public implementation \a q.
 */
ListInfrastructureConfigurationsResponsePrivate::ListInfrastructureConfigurationsResponsePrivate(
    ListInfrastructureConfigurationsResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListInfrastructureConfigurations response element from \a xml.
 */
void ListInfrastructureConfigurationsResponsePrivate::parseListInfrastructureConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInfrastructureConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
