/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
