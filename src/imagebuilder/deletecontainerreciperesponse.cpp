// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontainerreciperesponse.h"
#include "deletecontainerreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteContainerRecipeResponse
 * \brief The DeleteContainerRecipeResponse class provides an interace for ImageBuilder DeleteContainerRecipe responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteContainerRecipe
 */

/*!
 * Constructs a DeleteContainerRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerRecipeResponse::DeleteContainerRecipeResponse(
        const DeleteContainerRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteContainerRecipeResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerRecipeRequest * DeleteContainerRecipeResponse::request() const
{
    Q_D(const DeleteContainerRecipeResponse);
    return static_cast<const DeleteContainerRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteContainerRecipe \a response.
 */
void DeleteContainerRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteContainerRecipeResponsePrivate
 * \brief The DeleteContainerRecipeResponsePrivate class provides private implementation for DeleteContainerRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteContainerRecipeResponsePrivate object with public implementation \a q.
 */
DeleteContainerRecipeResponsePrivate::DeleteContainerRecipeResponsePrivate(
    DeleteContainerRecipeResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteContainerRecipe response element from \a xml.
 */
void DeleteContainerRecipeResponsePrivate::parseDeleteContainerRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
