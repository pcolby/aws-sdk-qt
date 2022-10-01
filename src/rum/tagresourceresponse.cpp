// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourceresponse.h"
#include "tagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::TagResourceResponse
 * \brief The TagResourceResponse class provides an interace for Rum TagResource responses.
 *
 * \inmodule QtAwsRum
 *
 *  With Amazon CloudWatch RUM, you can perform real-user monitoring to collect client-side data about your web application
 *  performance from actual user sessions in real time. The data collected includes page load times, client-side errors, and
 *  user behavior. When you view this data, you can see it all aggregated together and also see breakdowns by the browsers
 *  and devices that your customers
 * 
 *  use>
 * 
 *  You can use the collected data to quickly identify and debug client-side performance issues. CloudWatch RUM helps you
 *  visualize anomalies in your application performance and find relevant debugging data such as error messages, stack
 *  traces, and user sessions. You can also use RUM to understand the range of end-user impact including the number of
 *  users, geolocations, and browsers
 *
 * \sa RumClient::tagResource
 */

/*!
 * Constructs a TagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourceResponse::TagResourceResponse(
        const TagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new TagResourceResponsePrivate(this), parent)
{
    setRequest(new TagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagResourceRequest * TagResourceResponse::request() const
{
    Q_D(const TagResourceResponse);
    return static_cast<const TagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum TagResource \a response.
 */
void TagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::TagResourceResponsePrivate
 * \brief The TagResourceResponsePrivate class provides private implementation for TagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a TagResourceResponsePrivate object with public implementation \a q.
 */
TagResourceResponsePrivate::TagResourceResponsePrivate(
    TagResourceResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum TagResource response element from \a xml.
 */
void TagResourceResponsePrivate::parseTagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
