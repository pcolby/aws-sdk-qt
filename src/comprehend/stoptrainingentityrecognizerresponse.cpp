// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
