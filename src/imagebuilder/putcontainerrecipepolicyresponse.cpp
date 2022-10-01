// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontainerrecipepolicyresponse.h"
#include "putcontainerrecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutContainerRecipePolicyResponse
 * \brief The PutContainerRecipePolicyResponse class provides an interace for ImageBuilder PutContainerRecipePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putContainerRecipePolicy
 */

/*!
 * Constructs a PutContainerRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutContainerRecipePolicyResponse::PutContainerRecipePolicyResponse(
        const PutContainerRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new PutContainerRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new PutContainerRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContainerRecipePolicyRequest * PutContainerRecipePolicyResponse::request() const
{
    Q_D(const PutContainerRecipePolicyResponse);
    return static_cast<const PutContainerRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder PutContainerRecipePolicy \a response.
 */
void PutContainerRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutContainerRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::PutContainerRecipePolicyResponsePrivate
 * \brief The PutContainerRecipePolicyResponsePrivate class provides private implementation for PutContainerRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutContainerRecipePolicyResponsePrivate object with public implementation \a q.
 */
PutContainerRecipePolicyResponsePrivate::PutContainerRecipePolicyResponsePrivate(
    PutContainerRecipePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder PutContainerRecipePolicy response element from \a xml.
 */
void PutContainerRecipePolicyResponsePrivate::parsePutContainerRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContainerRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
