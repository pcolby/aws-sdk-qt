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

#include "getcontainerreciperesponse.h"
#include "getcontainerreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetContainerRecipeResponse
 * \brief The GetContainerRecipeResponse class provides an interace for imagebuilder GetContainerRecipe responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getContainerRecipe
 */

/*!
 * Constructs a GetContainerRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
GetContainerRecipeResponse::GetContainerRecipeResponse(
        const GetContainerRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new GetContainerRecipeResponsePrivate(this), parent)
{
    setRequest(new GetContainerRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContainerRecipeRequest * GetContainerRecipeResponse::request() const
{
    return static_cast<const GetContainerRecipeRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder GetContainerRecipe \a response.
 */
void GetContainerRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContainerRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::GetContainerRecipeResponsePrivate
 * \brief The GetContainerRecipeResponsePrivate class provides private implementation for GetContainerRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetContainerRecipeResponsePrivate object with public implementation \a q.
 */
GetContainerRecipeResponsePrivate::GetContainerRecipeResponsePrivate(
    GetContainerRecipeResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder GetContainerRecipe response element from \a xml.
 */
void GetContainerRecipeResponsePrivate::parseGetContainerRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
