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

#include "defineanalysisschemeresponse.h"
#include "defineanalysisschemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DefineAnalysisSchemeResponse
 *
 * @brief  Handles CloudSearch DefineAnalysisScheme responses.
 *
 * @see    CloudSearchClient::defineAnalysisScheme
 */

/**
 * @brief  Constructs a new DefineAnalysisSchemeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DefineAnalysisSchemeResponse::DefineAnalysisSchemeResponse(
        const DefineAnalysisSchemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineAnalysisSchemeResponsePrivate(this), parent)
{
    setRequest(new DefineAnalysisSchemeRequest(request));
    setReply(reply);
}

const DefineAnalysisSchemeRequest * DefineAnalysisSchemeResponse::request() const
{
    Q_D(const DefineAnalysisSchemeResponse);
    return static_cast<const DefineAnalysisSchemeRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DefineAnalysisScheme response.
 *
 * @param  response  Response to parse.
 */
void DefineAnalysisSchemeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DefineAnalysisSchemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DefineAnalysisSchemeResponsePrivate
 *
 * @brief  Private implementation for DefineAnalysisSchemeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineAnalysisSchemeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DefineAnalysisSchemeResponse instance.
 */
DefineAnalysisSchemeResponsePrivate::DefineAnalysisSchemeResponsePrivate(
    DefineAnalysisSchemeResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DefineAnalysisSchemeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DefineAnalysisSchemeResponsePrivate::parseDefineAnalysisSchemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineAnalysisSchemeResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
