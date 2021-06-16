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

#include "publishversionresponse.h"
#include "publishversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PublishVersionResponse
 * \brief The PublishVersionResponse class provides an interace for Lambda PublishVersion responses.
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
 * \sa LambdaClient::publishVersion
 */

/*!
 * Constructs a PublishVersionResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const PublishVersionRequest * PublishVersionResponse::request() const
{
    Q_D(const PublishVersionResponse);
    return static_cast<const PublishVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda PublishVersion \a response.
 */
void PublishVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::PublishVersionResponsePrivate
 * \brief The PublishVersionResponsePrivate class provides private implementation for PublishVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PublishVersionResponsePrivate object with public implementation \a q.
 */
PublishVersionResponsePrivate::PublishVersionResponsePrivate(
    PublishVersionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda PublishVersion response element from \a xml.
 */
void PublishVersionResponsePrivate::parsePublishVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
