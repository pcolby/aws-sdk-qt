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

#include "publishversionresponse.h"
#include "publishversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PublishVersionResponse
 *
 * \brief The PublishVersionResponse class encapsulates Lambda PublishVersion responses.
 *
 * \ingroup Lambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::publishVersion
 */

/*!
 * @brief  Constructs a new PublishVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PublishVersionResponse::PublishVersionResponse(
        const PublishVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PublishVersionResponsePrivate(this), parent)
{
    setRequest(new PublishVersionRequest(request));
    setReply(reply);
}

const PublishVersionRequest * PublishVersionResponse::request() const
{
    Q_D(const PublishVersionResponse);
    return static_cast<const PublishVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a Lambda PublishVersion response.
 *
 * @param  response  Response to parse.
 */
void PublishVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(PublishVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PublishVersionResponsePrivate
 *
 * \brief Private implementation for PublishVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PublishVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PublishVersionResponse instance.
 */
PublishVersionResponsePrivate::PublishVersionResponsePrivate(
    PublishVersionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lambda PublishVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PublishVersionResponsePrivate::parsePublishVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishVersionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
