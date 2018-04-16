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

#include "getassessmentreportresponse.h"
#include "getassessmentreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetAssessmentReportResponse
 *
 * \brief The GetAssessmentReportResponse class encapsulates Inspector GetAssessmentReport responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getAssessmentReport
 */

/*!
 * @brief  Constructs a new GetAssessmentReportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAssessmentReportResponse::GetAssessmentReportResponse(
        const GetAssessmentReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetAssessmentReportResponsePrivate(this), parent)
{
    setRequest(new GetAssessmentReportRequest(request));
    setReply(reply);
}

const GetAssessmentReportRequest * GetAssessmentReportResponse::request() const
{
    Q_D(const GetAssessmentReportResponse);
    return static_cast<const GetAssessmentReportRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector GetAssessmentReport response.
 *
 * @param  response  Response to parse.
 */
void GetAssessmentReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAssessmentReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetAssessmentReportResponsePrivate
 *
 * \brief Private implementation for GetAssessmentReportResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAssessmentReportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAssessmentReportResponse instance.
 */
GetAssessmentReportResponsePrivate::GetAssessmentReportResponsePrivate(
    GetAssessmentReportResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector GetAssessmentReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAssessmentReportResponsePrivate::parseGetAssessmentReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssessmentReportResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
