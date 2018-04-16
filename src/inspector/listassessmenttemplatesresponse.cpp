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

#include "listassessmenttemplatesresponse.h"
#include "listassessmenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentTemplatesResponse
 *
 * \brief The ListAssessmentTemplatesResponse class encapsulates Inspector ListAssessmentTemplates responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentTemplates
 */

/*!
 * @brief  Constructs a new ListAssessmentTemplatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssessmentTemplatesResponse::ListAssessmentTemplatesResponse(
        const ListAssessmentTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentTemplatesRequest(request));
    setReply(reply);
}

const ListAssessmentTemplatesRequest * ListAssessmentTemplatesResponse::request() const
{
    Q_D(const ListAssessmentTemplatesResponse);
    return static_cast<const ListAssessmentTemplatesRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector ListAssessmentTemplates response.
 *
 * @param  response  Response to parse.
 */
void ListAssessmentTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssessmentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListAssessmentTemplatesResponsePrivate
 *
 * \brief Private implementation for ListAssessmentTemplatesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAssessmentTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssessmentTemplatesResponse instance.
 */
ListAssessmentTemplatesResponsePrivate::ListAssessmentTemplatesResponsePrivate(
    ListAssessmentTemplatesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector ListAssessmentTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssessmentTemplatesResponsePrivate::parseListAssessmentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentTemplatesResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
