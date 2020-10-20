/*
    Copyright 2013-2020 Paul Colby

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

#include "stoptrainingentityrecognizerresponse.h"
#include "stoptrainingentityrecognizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTrainingEntityRecognizerResponse
 * \brief The StopTrainingEntityRecognizerResponse class provides an interace for Comprehend StopTrainingEntityRecognizer responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTrainingEntityRecognizer
 */

/*!
 * Constructs a StopTrainingEntityRecognizerResponse object for \a reply to \a request, with parent \a parent.
 */
StopTrainingEntityRecognizerResponse::StopTrainingEntityRecognizerResponse(
        const StopTrainingEntityRecognizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopTrainingEntityRecognizerResponsePrivate(this), parent)
{
    setRequest(new StopTrainingEntityRecognizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTrainingEntityRecognizerRequest * StopTrainingEntityRecognizerResponse::request() const
{
    Q_D(const StopTrainingEntityRecognizerResponse);
    return static_cast<const StopTrainingEntityRecognizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopTrainingEntityRecognizer \a response.
 */
void StopTrainingEntityRecognizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTrainingEntityRecognizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopTrainingEntityRecognizerResponsePrivate
 * \brief The StopTrainingEntityRecognizerResponsePrivate class provides private implementation for StopTrainingEntityRecognizerResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTrainingEntityRecognizerResponsePrivate object with public implementation \a q.
 */
StopTrainingEntityRecognizerResponsePrivate::StopTrainingEntityRecognizerResponsePrivate(
    StopTrainingEntityRecognizerResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopTrainingEntityRecognizer response element from \a xml.
 */
void StopTrainingEntityRecognizerResponsePrivate::parseStopTrainingEntityRecognizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTrainingEntityRecognizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
