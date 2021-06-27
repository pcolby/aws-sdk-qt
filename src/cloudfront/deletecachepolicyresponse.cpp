/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const DeleteCachePolicyRequest *>(CloudFrontResponse::request());
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
