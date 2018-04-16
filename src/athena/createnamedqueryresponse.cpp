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

#include "createnamedqueryresponse.h"
#include "createnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::CreateNamedQueryResponse
 *
 * \brief The CreateNamedQueryResponse class encapsulates Athena CreateNamedQuery responses.
 *
 * \ingroup Athena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::createNamedQuery
 */

/*!
 * @brief  Constructs a new CreateNamedQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNamedQueryResponse::CreateNamedQueryResponse(
        const CreateNamedQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new CreateNamedQueryResponsePrivate(this), parent)
{
    setRequest(new CreateNamedQueryRequest(request));
    setReply(reply);
}

const CreateNamedQueryRequest * CreateNamedQueryResponse::request() const
{
    Q_D(const CreateNamedQueryResponse);
    return static_cast<const CreateNamedQueryRequest *>(d->request);
}

/*!
 * @brief  Parse a Athena CreateNamedQuery response.
 *
 * @param  response  Response to parse.
 */
void CreateNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNamedQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateNamedQueryResponsePrivate
 *
 * \brief Private implementation for CreateNamedQueryResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNamedQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNamedQueryResponse instance.
 */
CreateNamedQueryResponsePrivate::CreateNamedQueryResponsePrivate(
    CreateNamedQueryResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Athena CreateNamedQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNamedQueryResponsePrivate::parseCreateNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNamedQueryResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
