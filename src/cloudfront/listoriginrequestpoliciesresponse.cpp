// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoriginrequestpoliciesresponse.h"
#include "listoriginrequestpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListOriginRequestPoliciesResponse
 * \brief The ListOriginRequestPoliciesResponse class provides an interace for CloudFront ListOriginRequestPolicies responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listOriginRequestPolicies
 */

/*!
 * Constructs a ListOriginRequestPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListOriginRequestPoliciesResponse::ListOriginRequestPoliciesResponse(
        const ListOriginRequestPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListOriginRequestPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListOriginRequestPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOriginRequestPoliciesRequest * ListOriginRequestPoliciesResponse::request() const
{
    Q_D(const ListOriginRequestPoliciesResponse);
    return static_cast<const ListOriginRequestPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListOriginRequestPolicies \a response.
 */
void ListOriginRequestPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOriginRequestPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListOriginRequestPoliciesResponsePrivate
 * \brief The ListOriginRequestPoliciesResponsePrivate class provides private implementation for ListOriginRequestPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListOriginRequestPoliciesResponsePrivate object with public implementation \a q.
 */
ListOriginRequestPoliciesResponsePrivate::ListOriginRequestPoliciesResponsePrivate(
    ListOriginRequestPoliciesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListOriginRequestPolicies response element from \a xml.
 */
void ListOriginRequestPoliciesResponsePrivate::parseListOriginRequestPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOriginRequestPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
