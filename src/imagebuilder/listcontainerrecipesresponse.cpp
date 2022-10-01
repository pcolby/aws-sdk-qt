// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontainerrecipesresponse.h"
#include "listcontainerrecipesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesResponse
 * \brief The ListContainerRecipesResponse class provides an interace for ImageBuilder ListContainerRecipes responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listContainerRecipes
 */

/*!
 * Constructs a ListContainerRecipesResponse object for \a reply to \a request, with parent \a parent.
 */
ListContainerRecipesResponse::ListContainerRecipesResponse(
        const ListContainerRecipesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListContainerRecipesResponsePrivate(this), parent)
{
    setRequest(new ListContainerRecipesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContainerRecipesRequest * ListContainerRecipesResponse::request() const
{
    Q_D(const ListContainerRecipesResponse);
    return static_cast<const ListContainerRecipesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListContainerRecipes \a response.
 */
void ListContainerRecipesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContainerRecipesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesResponsePrivate
 * \brief The ListContainerRecipesResponsePrivate class provides private implementation for ListContainerRecipesResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListContainerRecipesResponsePrivate object with public implementation \a q.
 */
ListContainerRecipesResponsePrivate::ListContainerRecipesResponsePrivate(
    ListContainerRecipesResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListContainerRecipes response element from \a xml.
 */
void ListContainerRecipesResponsePrivate::parseListContainerRecipesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContainerRecipesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
