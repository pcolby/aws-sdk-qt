/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stopassessmentrunresponse.h"
#include "stopassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StopAssessmentRunResponse
 *
 * \brief The StopAssessmentRunResponse class provides an interace for Inspector StopAssessmentRun responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::stopAssessmentRun
 */

/*!
 * @brief  Constructs a new StopAssessmentRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StopAssessmentRunRequest * StopAssessmentRunResponse::request() const
{
    Q_D(const StopAssessmentRunResponse);
    return static_cast<const StopAssessmentRunRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector StopAssessmentRun response.
 *
 * @param  response  Response to parse.
 */
void StopAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopAssessmentRunResponsePrivate
 *
 * \brief Private implementation for StopAssessmentRunResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopAssessmentRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopAssessmentRunResponse instance.
 */
StopAssessmentRunResponsePrivate::StopAssessmentRunResponsePrivate(
    StopAssessmentRunResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector StopAssessmentRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopAssessmentRunResponsePrivate::parseStopAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAssessmentRunResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
