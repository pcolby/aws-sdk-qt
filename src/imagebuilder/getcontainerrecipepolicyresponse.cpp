// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontainerrecipepolicyresponse.h"
#include "getcontainerrecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyResponse
 * \brief The GetContainerRecipePolicyResponse class provides an interace for ImageBuilder GetContainerRecipePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getContainerRecipePolicy
 */

/*!
 * Constructs a GetContainerRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContainerRecipePolicyResponse::GetContainerRecipePolicyResponse(
        const GetContainerRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetContainerRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new GetContainerRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContainerRecipePolicyRequest * GetContainerRecipePolicyResponse::request() const
{
    Q_D(const GetContainerRecipePolicyResponse);
    return static_cast<const GetContainerRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetContainerRecipePolicy \a response.
 */
void GetContainerRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContainerRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyResponsePrivate
 * \brief The GetContainerRecipePolicyResponsePrivate class provides private implementation for GetContainerRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetContainerRecipePolicyResponsePrivate object with public implementation \a q.
 */
GetContainerRecipePolicyResponsePrivate::GetContainerRecipePolicyResponsePrivate(
    GetContainerRecipePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetContainerRecipePolicy response element from \a xml.
 */
void GetContainerRecipePolicyResponsePrivate::parseGetContainerRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
