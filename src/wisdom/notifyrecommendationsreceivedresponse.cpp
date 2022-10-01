// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyrecommendationsreceivedresponse.h"
#include "notifyrecommendationsreceivedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::NotifyRecommendationsReceivedResponse
 * \brief The NotifyRecommendationsReceivedResponse class provides an interace for Wisdom NotifyRecommendationsReceived responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::notifyRecommendationsReceived
 */

/*!
 * Constructs a NotifyRecommendationsReceivedResponse object for \a reply to \a request, with parent \a parent.
 */
NotifyRecommendationsReceivedResponse::NotifyRecommendationsReceivedResponse(
        const NotifyRecommendationsReceivedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new NotifyRecommendationsReceivedResponsePrivate(this), parent)
{
    setRequest(new NotifyRecommendationsReceivedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const NotifyRecommendationsReceivedRequest * NotifyRecommendationsReceivedResponse::request() const
{
    Q_D(const NotifyRecommendationsReceivedResponse);
    return static_cast<const NotifyRecommendationsReceivedRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom NotifyRecommendationsReceived \a response.
 */
void NotifyRecommendationsReceivedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(NotifyRecommendationsReceivedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::NotifyRecommendationsReceivedResponsePrivate
 * \brief The NotifyRecommendationsReceivedResponsePrivate class provides private implementation for NotifyRecommendationsReceivedResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a NotifyRecommendationsReceivedResponsePrivate object with public implementation \a q.
 */
NotifyRecommendationsReceivedResponsePrivate::NotifyRecommendationsReceivedResponsePrivate(
    NotifyRecommendationsReceivedResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom NotifyRecommendationsReceived response element from \a xml.
 */
void NotifyRecommendationsReceivedResponsePrivate::parseNotifyRecommendationsReceivedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyRecommendationsReceivedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
