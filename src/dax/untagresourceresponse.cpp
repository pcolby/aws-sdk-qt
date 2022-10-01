// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourceresponse.h"
#include "untagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UntagResourceResponse
 * \brief The UntagResourceResponse class provides an interace for Dax UntagResource responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::untagResource
 */

/*!
 * Constructs a UntagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UntagResourceResponse::UntagResourceResponse(
        const UntagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new UntagResourceResponsePrivate(this), parent)
{
    setRequest(new UntagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagResourceRequest * UntagResourceResponse::request() const
{
    Q_D(const UntagResourceResponse);
    return static_cast<const UntagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax UntagResource \a response.
 */
void UntagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::UntagResourceResponsePrivate
 * \brief The UntagResourceResponsePrivate class provides private implementation for UntagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UntagResourceResponsePrivate object with public implementation \a q.
 */
UntagResourceResponsePrivate::UntagResourceResponsePrivate(
    UntagResourceResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax UntagResource response element from \a xml.
 */
void UntagResourceResponsePrivate::parseUntagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
