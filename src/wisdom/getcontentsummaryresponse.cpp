// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontentsummaryresponse.h"
#include "getcontentsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetContentSummaryResponse
 * \brief The GetContentSummaryResponse class provides an interace for Wisdom GetContentSummary responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getContentSummary
 */

/*!
 * Constructs a GetContentSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetContentSummaryResponse::GetContentSummaryResponse(
        const GetContentSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetContentSummaryResponsePrivate(this), parent)
{
    setRequest(new GetContentSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContentSummaryRequest * GetContentSummaryResponse::request() const
{
    Q_D(const GetContentSummaryResponse);
    return static_cast<const GetContentSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom GetContentSummary \a response.
 */
void GetContentSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContentSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetContentSummaryResponsePrivate
 * \brief The GetContentSummaryResponsePrivate class provides private implementation for GetContentSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetContentSummaryResponsePrivate object with public implementation \a q.
 */
GetContentSummaryResponsePrivate::GetContentSummaryResponsePrivate(
    GetContentSummaryResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetContentSummary response element from \a xml.
 */
void GetContentSummaryResponsePrivate::parseGetContentSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContentSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
