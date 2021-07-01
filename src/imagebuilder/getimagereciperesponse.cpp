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

#include "getimagereciperesponse.h"
#include "getimagereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImageRecipeResponse
 * \brief The GetImageRecipeResponse class provides an interace for imagebuilder GetImageRecipe responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImageRecipe
 */

/*!
 * Constructs a GetImageRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
GetImageRecipeResponse::GetImageRecipeResponse(
        const GetImageRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new GetImageRecipeResponsePrivate(this), parent)
{
    setRequest(new GetImageRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImageRecipeRequest * GetImageRecipeResponse::request() const
{
    Q_D(const GetImageRecipeResponse);
    return static_cast<const GetImageRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder GetImageRecipe \a response.
 */
void GetImageRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImageRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::GetImageRecipeResponsePrivate
 * \brief The GetImageRecipeResponsePrivate class provides private implementation for GetImageRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImageRecipeResponsePrivate object with public implementation \a q.
 */
GetImageRecipeResponsePrivate::GetImageRecipeResponsePrivate(
    GetImageRecipeResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder GetImageRecipe response element from \a xml.
 */
void GetImageRecipeResponsePrivate::parseGetImageRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImageRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
