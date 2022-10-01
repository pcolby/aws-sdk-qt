// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagepolicyresponse.h"
#include "getimagepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyResponse
 * \brief The GetImagePolicyResponse class provides an interace for ImageBuilder GetImagePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImagePolicy
 */

/*!
 * Constructs a GetImagePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetImagePolicyResponse::GetImagePolicyResponse(
        const GetImagePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImagePolicyResponsePrivate(this), parent)
{
    setRequest(new GetImagePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImagePolicyRequest * GetImagePolicyResponse::request() const
{
    Q_D(const GetImagePolicyResponse);
    return static_cast<const GetImagePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetImagePolicy \a response.
 */
void GetImagePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImagePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyResponsePrivate
 * \brief The GetImagePolicyResponsePrivate class provides private implementation for GetImagePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImagePolicyResponsePrivate object with public implementation \a q.
 */
GetImagePolicyResponsePrivate::GetImagePolicyResponsePrivate(
    GetImagePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImagePolicy response element from \a xml.
 */
void GetImagePolicyResponsePrivate::parseGetImagePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImagePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
