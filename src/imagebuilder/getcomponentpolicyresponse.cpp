// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponentpolicyresponse.h"
#include "getcomponentpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyResponse
 * \brief The GetComponentPolicyResponse class provides an interace for ImageBuilder GetComponentPolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponentPolicy
 */

/*!
 * Constructs a GetComponentPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetComponentPolicyResponse::GetComponentPolicyResponse(
        const GetComponentPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetComponentPolicyResponsePrivate(this), parent)
{
    setRequest(new GetComponentPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComponentPolicyRequest * GetComponentPolicyResponse::request() const
{
    Q_D(const GetComponentPolicyResponse);
    return static_cast<const GetComponentPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetComponentPolicy \a response.
 */
void GetComponentPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComponentPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyResponsePrivate
 * \brief The GetComponentPolicyResponsePrivate class provides private implementation for GetComponentPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentPolicyResponsePrivate object with public implementation \a q.
 */
GetComponentPolicyResponsePrivate::GetComponentPolicyResponsePrivate(
    GetComponentPolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetComponentPolicy response element from \a xml.
 */
void GetComponentPolicyResponsePrivate::parseGetComponentPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComponentPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
