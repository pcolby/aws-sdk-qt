// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcachepoliciesresponse.h"
#include "listcachepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCachePoliciesResponse
 * \brief The ListCachePoliciesResponse class provides an interace for CloudFront ListCachePolicies responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCachePolicies
 */

/*!
 * Constructs a ListCachePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCachePoliciesResponse::ListCachePoliciesResponse(
        const ListCachePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListCachePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListCachePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCachePoliciesRequest * ListCachePoliciesResponse::request() const
{
    Q_D(const ListCachePoliciesResponse);
    return static_cast<const ListCachePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListCachePolicies \a response.
 */
void ListCachePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCachePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListCachePoliciesResponsePrivate
 * \brief The ListCachePoliciesResponsePrivate class provides private implementation for ListCachePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCachePoliciesResponsePrivate object with public implementation \a q.
 */
ListCachePoliciesResponsePrivate::ListCachePoliciesResponsePrivate(
    ListCachePoliciesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListCachePolicies response element from \a xml.
 */
void ListCachePoliciesResponsePrivate::parseListCachePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCachePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
