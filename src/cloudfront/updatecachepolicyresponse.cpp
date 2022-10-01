// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecachepolicyresponse.h"
#include "updatecachepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateCachePolicyResponse
 * \brief The UpdateCachePolicyResponse class provides an interace for CloudFront UpdateCachePolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateCachePolicy
 */

/*!
 * Constructs a UpdateCachePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCachePolicyResponse::UpdateCachePolicyResponse(
        const UpdateCachePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateCachePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateCachePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCachePolicyRequest * UpdateCachePolicyResponse::request() const
{
    Q_D(const UpdateCachePolicyResponse);
    return static_cast<const UpdateCachePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateCachePolicy \a response.
 */
void UpdateCachePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCachePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateCachePolicyResponsePrivate
 * \brief The UpdateCachePolicyResponsePrivate class provides private implementation for UpdateCachePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateCachePolicyResponsePrivate object with public implementation \a q.
 */
UpdateCachePolicyResponsePrivate::UpdateCachePolicyResponsePrivate(
    UpdateCachePolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateCachePolicy response element from \a xml.
 */
void UpdateCachePolicyResponsePrivate::parseUpdateCachePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCachePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
