// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopassessmentrunresponse.h"
#include "stopassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StopAssessmentRunResponse
 * \brief The StopAssessmentRunResponse class provides an interace for Inspector StopAssessmentRun responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::stopAssessmentRun
 */

/*!
 * Constructs a StopAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopAssessmentRunResponse::StopAssessmentRunResponse(
        const StopAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new StopAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new StopAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopAssessmentRunRequest * StopAssessmentRunResponse::request() const
{
    Q_D(const StopAssessmentRunResponse);
    return static_cast<const StopAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector StopAssessmentRun \a response.
 */
void StopAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::StopAssessmentRunResponsePrivate
 * \brief The StopAssessmentRunResponsePrivate class provides private implementation for StopAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a StopAssessmentRunResponsePrivate object with public implementation \a q.
 */
StopAssessmentRunResponsePrivate::StopAssessmentRunResponsePrivate(
    StopAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector StopAssessmentRun response element from \a xml.
 */
void StopAssessmentRunResponsePrivate::parseStopAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
