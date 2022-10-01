// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "submitfeedbackresponse.h"
#include "submitfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::SubmitFeedbackResponse
 * \brief The SubmitFeedbackResponse class provides an interace for Kendra SubmitFeedback responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::submitFeedback
 */

/*!
 * Constructs a SubmitFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
SubmitFeedbackResponse::SubmitFeedbackResponse(
        const SubmitFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new SubmitFeedbackResponsePrivate(this), parent)
{
    setRequest(new SubmitFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubmitFeedbackRequest * SubmitFeedbackResponse::request() const
{
    Q_D(const SubmitFeedbackResponse);
    return static_cast<const SubmitFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra SubmitFeedback \a response.
 */
void SubmitFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubmitFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::SubmitFeedbackResponsePrivate
 * \brief The SubmitFeedbackResponsePrivate class provides private implementation for SubmitFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a SubmitFeedbackResponsePrivate object with public implementation \a q.
 */
SubmitFeedbackResponsePrivate::SubmitFeedbackResponsePrivate(
    SubmitFeedbackResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra SubmitFeedback response element from \a xml.
 */
void SubmitFeedbackResponsePrivate::parseSubmitFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
