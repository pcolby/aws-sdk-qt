// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbykeygroupresponse.h"
#include "listdistributionsbykeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupResponse
 * \brief The ListDistributionsByKeyGroupResponse class provides an interace for CloudFront ListDistributionsByKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByKeyGroup
 */

/*!
 * Constructs a ListDistributionsByKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByKeyGroupResponse::ListDistributionsByKeyGroupResponse(
        const ListDistributionsByKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByKeyGroupResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByKeyGroupRequest * ListDistributionsByKeyGroupResponse::request() const
{
    Q_D(const ListDistributionsByKeyGroupResponse);
    return static_cast<const ListDistributionsByKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByKeyGroup \a response.
 */
void ListDistributionsByKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByKeyGroupResponsePrivate
 * \brief The ListDistributionsByKeyGroupResponsePrivate class provides private implementation for ListDistributionsByKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByKeyGroupResponsePrivate object with public implementation \a q.
 */
ListDistributionsByKeyGroupResponsePrivate::ListDistributionsByKeyGroupResponsePrivate(
    ListDistributionsByKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByKeyGroup response element from \a xml.
 */
void ListDistributionsByKeyGroupResponsePrivate::parseListDistributionsByKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
