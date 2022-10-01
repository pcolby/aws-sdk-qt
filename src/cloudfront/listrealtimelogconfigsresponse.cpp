// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrealtimelogconfigsresponse.h"
#include "listrealtimelogconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsResponse
 * \brief The ListRealtimeLogConfigsResponse class provides an interace for CloudFront ListRealtimeLogConfigs responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listRealtimeLogConfigs
 */

/*!
 * Constructs a ListRealtimeLogConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRealtimeLogConfigsResponse::ListRealtimeLogConfigsResponse(
        const ListRealtimeLogConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListRealtimeLogConfigsResponsePrivate(this), parent)
{
    setRequest(new ListRealtimeLogConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRealtimeLogConfigsRequest * ListRealtimeLogConfigsResponse::request() const
{
    Q_D(const ListRealtimeLogConfigsResponse);
    return static_cast<const ListRealtimeLogConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListRealtimeLogConfigs \a response.
 */
void ListRealtimeLogConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRealtimeLogConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListRealtimeLogConfigsResponsePrivate
 * \brief The ListRealtimeLogConfigsResponsePrivate class provides private implementation for ListRealtimeLogConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListRealtimeLogConfigsResponsePrivate object with public implementation \a q.
 */
ListRealtimeLogConfigsResponsePrivate::ListRealtimeLogConfigsResponsePrivate(
    ListRealtimeLogConfigsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListRealtimeLogConfigs response element from \a xml.
 */
void ListRealtimeLogConfigsResponsePrivate::parseListRealtimeLogConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRealtimeLogConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
