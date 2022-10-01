// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbywebaclidresponse.h"
#include "listdistributionsbywebaclidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdResponse
 * \brief The ListDistributionsByWebACLIdResponse class provides an interace for CloudFront ListDistributionsByWebACLId responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByWebACLId
 */

/*!
 * Constructs a ListDistributionsByWebACLIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByWebACLIdResponse::ListDistributionsByWebACLIdResponse(
        const ListDistributionsByWebACLIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByWebACLIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByWebACLIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByWebACLIdRequest * ListDistributionsByWebACLIdResponse::request() const
{
    Q_D(const ListDistributionsByWebACLIdResponse);
    return static_cast<const ListDistributionsByWebACLIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByWebACLId \a response.
 */
void ListDistributionsByWebACLIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByWebACLIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdResponsePrivate
 * \brief The ListDistributionsByWebACLIdResponsePrivate class provides private implementation for ListDistributionsByWebACLIdResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByWebACLIdResponsePrivate object with public implementation \a q.
 */
ListDistributionsByWebACLIdResponsePrivate::ListDistributionsByWebACLIdResponsePrivate(
    ListDistributionsByWebACLIdResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByWebACLId response element from \a xml.
 */
void ListDistributionsByWebACLIdResponsePrivate::parseListDistributionsByWebACLIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByWebACLIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
