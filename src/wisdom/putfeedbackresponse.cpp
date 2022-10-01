// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putfeedbackresponse.h"
#include "putfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::PutFeedbackResponse
 * \brief The PutFeedbackResponse class provides an interace for Wisdom PutFeedback responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::putFeedback
 */

/*!
 * Constructs a PutFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
PutFeedbackResponse::PutFeedbackResponse(
        const PutFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new PutFeedbackResponsePrivate(this), parent)
{
    setRequest(new PutFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFeedbackRequest * PutFeedbackResponse::request() const
{
    Q_D(const PutFeedbackResponse);
    return static_cast<const PutFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom PutFeedback \a response.
 */
void PutFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::PutFeedbackResponsePrivate
 * \brief The PutFeedbackResponsePrivate class provides private implementation for PutFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a PutFeedbackResponsePrivate object with public implementation \a q.
 */
PutFeedbackResponsePrivate::PutFeedbackResponsePrivate(
    PutFeedbackResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom PutFeedback response element from \a xml.
 */
void PutFeedbackResponsePrivate::parsePutFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
