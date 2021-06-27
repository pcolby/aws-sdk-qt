/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "submitfeedbackresponse.h"
#include "submitfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::SubmitFeedbackResponse
 * \brief The SubmitFeedbackResponse class provides an interace for kendra SubmitFeedback responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::submitFeedback
 */

/*!
 * Constructs a SubmitFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
SubmitFeedbackResponse::SubmitFeedbackResponse(
        const SubmitFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new SubmitFeedbackResponsePrivate(this), parent)
{
    setRequest(new SubmitFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubmitFeedbackRequest * SubmitFeedbackResponse::request() const
{
    return static_cast<const SubmitFeedbackRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra SubmitFeedback \a response.
 */
void SubmitFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubmitFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::SubmitFeedbackResponsePrivate
 * \brief The SubmitFeedbackResponsePrivate class provides private implementation for SubmitFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a SubmitFeedbackResponsePrivate object with public implementation \a q.
 */
SubmitFeedbackResponsePrivate::SubmitFeedbackResponsePrivate(
    SubmitFeedbackResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra SubmitFeedback response element from \a xml.
 */
void SubmitFeedbackResponsePrivate::parseSubmitFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
