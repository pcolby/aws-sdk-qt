// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachepolicyresponse.h"
#include "deletecachepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteCachePolicyResponse
 * \brief The DeleteCachePolicyResponse class provides an interace for CloudFront DeleteCachePolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteCachePolicy
 */

/*!
 * Constructs a DeleteCachePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCachePolicyResponse::DeleteCachePolicyResponse(
        const DeleteCachePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteCachePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteCachePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCachePolicyRequest * DeleteCachePolicyResponse::request() const
{
    Q_D(const DeleteCachePolicyResponse);
    return static_cast<const DeleteCachePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteCachePolicy \a response.
 */
void DeleteCachePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCachePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteCachePolicyResponsePrivate
 * \brief The DeleteCachePolicyResponsePrivate class provides private implementation for DeleteCachePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteCachePolicyResponsePrivate object with public implementation \a q.
 */
DeleteCachePolicyResponsePrivate::DeleteCachePolicyResponsePrivate(
    DeleteCachePolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteCachePolicy response element from \a xml.
 */
void DeleteCachePolicyResponsePrivate::parseDeleteCachePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCachePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
