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

#include "addattributestofindingsresponse.h"
#include "addattributestofindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsResponse
 *
 * \brief The AddAttributesToFindingsResponse class encapsulates Inspector AddAttributesToFindings responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::addAttributesToFindings
 */

/*!
 * @brief  Constructs a new AddAttributesToFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddAttributesToFindingsResponse::AddAttributesToFindingsResponse(
        const AddAttributesToFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new AddAttributesToFindingsResponsePrivate(this), parent)
{
    setRequest(new AddAttributesToFindingsRequest(request));
    setReply(reply);
}

const AddAttributesToFindingsRequest * AddAttributesToFindingsResponse::request() const
{
    Q_D(const AddAttributesToFindingsResponse);
    return static_cast<const AddAttributesToFindingsRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector AddAttributesToFindings response.
 *
 * @param  response  Response to parse.
 */
void AddAttributesToFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddAttributesToFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AddAttributesToFindingsResponsePrivate
 *
 * \brief Private implementation for AddAttributesToFindingsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddAttributesToFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddAttributesToFindingsResponse instance.
 */
AddAttributesToFindingsResponsePrivate::AddAttributesToFindingsResponsePrivate(
    AddAttributesToFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector AddAttributesToFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddAttributesToFindingsResponsePrivate::parseAddAttributesToFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddAttributesToFindingsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
