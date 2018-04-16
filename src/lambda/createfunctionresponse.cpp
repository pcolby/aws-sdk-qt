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

#include "createfunctionresponse.h"
#include "createfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::CreateFunctionResponse
 *
 * \brief The CreateFunctionResponse class provides an interace for Lambda CreateFunction responses.
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
 * \sa LambdaClient::createFunction
 */

/*!
 * @brief  Constructs a new CreateFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFunctionResponse::CreateFunctionResponse(
        const CreateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new CreateFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionRequest(request));
    setReply(reply);
}

const CreateFunctionRequest * CreateFunctionResponse::request() const
{
    Q_D(const CreateFunctionResponse);
    return static_cast<const CreateFunctionRequest *>(d->request);
}

/*!
 * @brief  Parse a Lambda CreateFunction response.
 *
 * @param  response  Response to parse.
 */
void CreateFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateFunctionResponsePrivate
 *
 * \brief Private implementation for CreateFunctionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFunctionResponse instance.
 */
CreateFunctionResponsePrivate::CreateFunctionResponsePrivate(
    CreateFunctionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lambda CreateFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFunctionResponsePrivate::parseCreateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
