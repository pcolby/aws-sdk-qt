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

#include "previewagentsresponse.h"
#include "previewagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::PreviewAgentsResponse
 *
 * \brief The PreviewAgentsResponse class provides an interace for Inspector PreviewAgents responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::previewAgents
 */

/*!
 * @brief  Constructs a new PreviewAgentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PreviewAgentsResponse::PreviewAgentsResponse(
        const PreviewAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new PreviewAgentsResponsePrivate(this), parent)
{
    setRequest(new PreviewAgentsRequest(request));
    setReply(reply);
}

const PreviewAgentsRequest * PreviewAgentsResponse::request() const
{
    Q_D(const PreviewAgentsResponse);
    return static_cast<const PreviewAgentsRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector PreviewAgents response.
 *
 * @param  response  Response to parse.
 */
void PreviewAgentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PreviewAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PreviewAgentsResponsePrivate
 *
 * \brief Private implementation for PreviewAgentsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PreviewAgentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PreviewAgentsResponse instance.
 */
PreviewAgentsResponsePrivate::PreviewAgentsResponsePrivate(
    PreviewAgentsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector PreviewAgentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PreviewAgentsResponsePrivate::parsePreviewAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PreviewAgentsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
