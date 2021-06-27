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

#include "updatefunctioneventinvokeconfigresponse.h"
#include "updatefunctioneventinvokeconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::UpdateFunctionEventInvokeConfigResponse
 * \brief The UpdateFunctionEventInvokeConfigResponse class provides an interace for Lambda UpdateFunctionEventInvokeConfig responses.
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
 * \sa LambdaClient::updateFunctionEventInvokeConfig
 */

/*!
 * Constructs a UpdateFunctionEventInvokeConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFunctionEventInvokeConfigResponse::UpdateFunctionEventInvokeConfigResponse(
        const UpdateFunctionEventInvokeConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateFunctionEventInvokeConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionEventInvokeConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFunctionEventInvokeConfigRequest * UpdateFunctionEventInvokeConfigResponse::request() const
{
    return static_cast<const UpdateFunctionEventInvokeConfigRequest *>(LambdaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Lambda UpdateFunctionEventInvokeConfig \a response.
 */
void UpdateFunctionEventInvokeConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFunctionEventInvokeConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::UpdateFunctionEventInvokeConfigResponsePrivate
 * \brief The UpdateFunctionEventInvokeConfigResponsePrivate class provides private implementation for UpdateFunctionEventInvokeConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a UpdateFunctionEventInvokeConfigResponsePrivate object with public implementation \a q.
 */
UpdateFunctionEventInvokeConfigResponsePrivate::UpdateFunctionEventInvokeConfigResponsePrivate(
    UpdateFunctionEventInvokeConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda UpdateFunctionEventInvokeConfig response element from \a xml.
 */
void UpdateFunctionEventInvokeConfigResponsePrivate::parseUpdateFunctionEventInvokeConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionEventInvokeConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
