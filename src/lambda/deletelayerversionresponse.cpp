/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletelayerversionresponse.h"
#include "deletelayerversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteLayerVersionResponse
 * \brief The DeleteLayerVersionResponse class provides an interace for Lambda DeleteLayerVersion responses.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::deleteLayerVersion
 */

/*!
 * Constructs a DeleteLayerVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLayerVersionResponse::DeleteLayerVersionResponse(
        const DeleteLayerVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteLayerVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteLayerVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLayerVersionRequest * DeleteLayerVersionResponse::request() const
{
    return static_cast<const DeleteLayerVersionRequest *>(LambdaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Lambda DeleteLayerVersion \a response.
 */
void DeleteLayerVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLayerVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::DeleteLayerVersionResponsePrivate
 * \brief The DeleteLayerVersionResponsePrivate class provides private implementation for DeleteLayerVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteLayerVersionResponsePrivate object with public implementation \a q.
 */
DeleteLayerVersionResponsePrivate::DeleteLayerVersionResponsePrivate(
    DeleteLayerVersionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda DeleteLayerVersion response element from \a xml.
 */
void DeleteLayerVersionResponsePrivate::parseDeleteLayerVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLayerVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
