// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagereciperesponse.h"
#include "getimagereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageRecipeResponse
 * \brief The GetImageRecipeResponse class provides an interace for ImageBuilder GetImageRecipe responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImageRecipe
 */

/*!
 * Constructs a GetImageRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
GetImageRecipeResponse::GetImageRecipeResponse(
        const GetImageRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImageRecipeResponsePrivate(this), parent)
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
 * Parses a successful ImageBuilder GetImageRecipe \a response.
 */
void GetImageRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImageRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImageRecipeResponsePrivate
 * \brief The GetImageRecipeResponsePrivate class provides private implementation for GetImageRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageRecipeResponsePrivate object with public implementation \a q.
 */
GetImageRecipeResponsePrivate::GetImageRecipeResponsePrivate(
    GetImageRecipeResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImageRecipe response element from \a xml.
 */
void GetImageRecipeResponsePrivate::parseGetImageRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImageRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
