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
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListContainerRecipesResponse
 * \brief The ListContainerRecipesResponse class provides an interace for imagebuilder ListContainerRecipes responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listContainerRecipes
 */

/*!
 * Constructs a ListContainerRecipesResponse object for \a reply to \a request, with parent \a parent.
 */
ListContainerRecipesResponse::ListContainerRecipesResponse(
        const ListContainerRecipesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListContainerRecipesResponsePrivate(this), parent)
{
    setRequest(new ListContainerRecipesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContainerRecipesRequest * ListContainerRecipesResponse::request() const
{
    return static_cast<const ListContainerRecipesRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListContainerRecipes \a response.
 */
void ListContainerRecipesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContainerRecipesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListContainerRecipesResponsePrivate
 * \brief The ListContainerRecipesResponsePrivate class provides private implementation for ListContainerRecipesResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListContainerRecipesResponsePrivate object with public implementation \a q.
 */
ListContainerRecipesResponsePrivate::ListContainerRecipesResponsePrivate(
    ListContainerRecipesResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListContainerRecipes response element from \a xml.
 */
void ListContainerRecipesResponsePrivate::parseListContainerRecipesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContainerRecipesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
