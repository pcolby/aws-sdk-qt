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

#include "createcontainerreciperesponse.h"
#include "createcontainerreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateContainerRecipeResponse
 * \brief The CreateContainerRecipeResponse class provides an interace for ImageBuilder CreateContainerRecipe responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createContainerRecipe
 */

/*!
 * Constructs a CreateContainerRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContainerRecipeResponse::CreateContainerRecipeResponse(
        const CreateContainerRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateContainerRecipeResponsePrivate(this), parent)
{
    setRequest(new CreateContainerRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContainerRecipeRequest * CreateContainerRecipeResponse::request() const
{
    Q_D(const CreateContainerRecipeResponse);
    return static_cast<const CreateContainerRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateContainerRecipe \a response.
 */
void CreateContainerRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContainerRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateContainerRecipeResponsePrivate
 * \brief The CreateContainerRecipeResponsePrivate class provides private implementation for CreateContainerRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateContainerRecipeResponsePrivate object with public implementation \a q.
 */
CreateContainerRecipeResponsePrivate::CreateContainerRecipeResponsePrivate(
    CreateContainerRecipeResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateContainerRecipe response element from \a xml.
 */
void CreateContainerRecipeResponsePrivate::parseCreateContainerRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContainerRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
