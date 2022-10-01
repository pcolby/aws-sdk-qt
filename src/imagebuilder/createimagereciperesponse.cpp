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

#include "createimagereciperesponse.h"
#include "createimagereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImageRecipeResponse
 * \brief The CreateImageRecipeResponse class provides an interace for ImageBuilder CreateImageRecipe responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImageRecipe
 */

/*!
 * Constructs a CreateImageRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageRecipeResponse::CreateImageRecipeResponse(
        const CreateImageRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateImageRecipeResponsePrivate(this), parent)
{
    setRequest(new CreateImageRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageRecipeRequest * CreateImageRecipeResponse::request() const
{
    Q_D(const CreateImageRecipeResponse);
    return static_cast<const CreateImageRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateImageRecipe \a response.
 */
void CreateImageRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateImageRecipeResponsePrivate
 * \brief The CreateImageRecipeResponsePrivate class provides private implementation for CreateImageRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImageRecipeResponsePrivate object with public implementation \a q.
 */
CreateImageRecipeResponsePrivate::CreateImageRecipeResponsePrivate(
    CreateImageRecipeResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateImageRecipe response element from \a xml.
 */
void CreateImageRecipeResponsePrivate::parseCreateImageRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
