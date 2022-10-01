// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagerecipepolicyresponse.h"
#include "putimagerecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutImageRecipePolicyResponse
 * \brief The PutImageRecipePolicyResponse class provides an interace for ImageBuilder PutImageRecipePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putImageRecipePolicy
 */

/*!
 * Constructs a PutImageRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageRecipePolicyResponse::PutImageRecipePolicyResponse(
        const PutImageRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new PutImageRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new PutImageRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImageRecipePolicyRequest * PutImageRecipePolicyResponse::request() const
{
    Q_D(const PutImageRecipePolicyResponse);
    return static_cast<const PutImageRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder PutImageRecipePolicy \a response.
 */
void PutImageRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::PutImageRecipePolicyResponsePrivate
 * \brief The PutImageRecipePolicyResponsePrivate class provides private implementation for PutImageRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutImageRecipePolicyResponsePrivate object with public implementation \a q.
 */
PutImageRecipePolicyResponsePrivate::PutImageRecipePolicyResponsePrivate(
    PutImageRecipePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder PutImageRecipePolicy response element from \a xml.
 */
void PutImageRecipePolicyResponsePrivate::parsePutImageRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
