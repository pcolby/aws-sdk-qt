// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresponseheaderspoliciesresponse.h"
#include "listresponseheaderspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListResponseHeadersPoliciesResponse
 * \brief The ListResponseHeadersPoliciesResponse class provides an interace for CloudFront ListResponseHeadersPolicies responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listResponseHeadersPolicies
 */

/*!
 * Constructs a ListResponseHeadersPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListResponseHeadersPoliciesResponse::ListResponseHeadersPoliciesResponse(
        const ListResponseHeadersPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListResponseHeadersPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListResponseHeadersPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResponseHeadersPoliciesRequest * ListResponseHeadersPoliciesResponse::request() const
{
    Q_D(const ListResponseHeadersPoliciesResponse);
    return static_cast<const ListResponseHeadersPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListResponseHeadersPolicies \a response.
 */
void ListResponseHeadersPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResponseHeadersPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListResponseHeadersPoliciesResponsePrivate
 * \brief The ListResponseHeadersPoliciesResponsePrivate class provides private implementation for ListResponseHeadersPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListResponseHeadersPoliciesResponsePrivate object with public implementation \a q.
 */
ListResponseHeadersPoliciesResponsePrivate::ListResponseHeadersPoliciesResponsePrivate(
    ListResponseHeadersPoliciesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListResponseHeadersPolicies response element from \a xml.
 */
void ListResponseHeadersPoliciesResponsePrivate::parseListResponseHeadersPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResponseHeadersPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
