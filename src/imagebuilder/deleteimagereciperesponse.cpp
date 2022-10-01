// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimagereciperesponse.h"
#include "deleteimagereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImageRecipeResponse
 * \brief The DeleteImageRecipeResponse class provides an interace for ImageBuilder DeleteImageRecipe responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImageRecipe
 */

/*!
 * Constructs a DeleteImageRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageRecipeResponse::DeleteImageRecipeResponse(
        const DeleteImageRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteImageRecipeResponsePrivate(this), parent)
{
    setRequest(new DeleteImageRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageRecipeRequest * DeleteImageRecipeResponse::request() const
{
    Q_D(const DeleteImageRecipeResponse);
    return static_cast<const DeleteImageRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteImageRecipe \a response.
 */
void DeleteImageRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImageRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteImageRecipeResponsePrivate
 * \brief The DeleteImageRecipeResponsePrivate class provides private implementation for DeleteImageRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImageRecipeResponsePrivate object with public implementation \a q.
 */
DeleteImageRecipeResponsePrivate::DeleteImageRecipeResponsePrivate(
    DeleteImageRecipeResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteImageRecipe response element from \a xml.
 */
void DeleteImageRecipeResponsePrivate::parseDeleteImageRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
