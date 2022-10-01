// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbyrealtimelogconfigresponse.h"
#include "listdistributionsbyrealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByRealtimeLogConfigResponse
 * \brief The ListDistributionsByRealtimeLogConfigResponse class provides an interace for CloudFront ListDistributionsByRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByRealtimeLogConfig
 */

/*!
 * Constructs a ListDistributionsByRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsByRealtimeLogConfigResponse::ListDistributionsByRealtimeLogConfigResponse(
        const ListDistributionsByRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsByRealtimeLogConfigRequest * ListDistributionsByRealtimeLogConfigResponse::request() const
{
    Q_D(const ListDistributionsByRealtimeLogConfigResponse);
    return static_cast<const ListDistributionsByRealtimeLogConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributionsByRealtimeLogConfig \a response.
 */
void ListDistributionsByRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsByRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByRealtimeLogConfigResponsePrivate
 * \brief The ListDistributionsByRealtimeLogConfigResponsePrivate class provides private implementation for ListDistributionsByRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
ListDistributionsByRealtimeLogConfigResponsePrivate::ListDistributionsByRealtimeLogConfigResponsePrivate(
    ListDistributionsByRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributionsByRealtimeLogConfig response element from \a xml.
 */
void ListDistributionsByRealtimeLogConfigResponsePrivate::parseListDistributionsByRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
