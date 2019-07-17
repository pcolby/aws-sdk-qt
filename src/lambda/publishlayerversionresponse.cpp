/*
    Copyright 2013-2019 Paul Colby

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

#include "publishlayerversionresponse.h"
#include "publishlayerversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PublishLayerVersionResponse
 * \brief The PublishLayerVersionResponse class provides an interace for Lambda PublishLayerVersion responses.
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
 * \sa LambdaClient::publishLayerVersion
 */

/*!
 * Constructs a PublishLayerVersionResponse object for \a reply to \a request, with parent \a parent.
 */
PublishLayerVersionResponse::PublishLayerVersionResponse(
        const PublishLayerVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PublishLayerVersionResponsePrivate(this), parent)
{
    setRequest(new PublishLayerVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishLayerVersionRequest * PublishLayerVersionResponse::request() const
{
    Q_D(const PublishLayerVersionResponse);
    return static_cast<const PublishLayerVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda PublishLayerVersion \a response.
 */
void PublishLayerVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishLayerVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::PublishLayerVersionResponsePrivate
 * \brief The PublishLayerVersionResponsePrivate class provides private implementation for PublishLayerVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PublishLayerVersionResponsePrivate object with public implementation \a q.
 */
PublishLayerVersionResponsePrivate::PublishLayerVersionResponsePrivate(
    PublishLayerVersionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda PublishLayerVersion response element from \a xml.
 */
void PublishLayerVersionResponsePrivate::parsePublishLayerVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishLayerVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
