// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourceresponse.h"
#include "tagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::TagResourceResponse
 * \brief The TagResourceResponse class provides an interace for LookoutMetrics TagResource responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::tagResource
 */

/*!
 * Constructs a TagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourceResponse::TagResourceResponse(
        const TagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new TagResourceResponsePrivate(this), parent)
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
 * Parses a successful LookoutMetrics TagResource \a response.
 */
void TagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::TagResourceResponsePrivate
 * \brief The TagResourceResponsePrivate class provides private implementation for TagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a TagResourceResponsePrivate object with public implementation \a q.
 */
TagResourceResponsePrivate::TagResourceResponsePrivate(
    TagResourceResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics TagResource response element from \a xml.
 */
void TagResourceResponsePrivate::parseTagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
