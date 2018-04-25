/*
    Copyright 2013-2018 Paul Colby

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

#include "describevoicesresponse.h"
#include "describevoicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DescribeVoicesResponse
 * \brief The DescribeVoicesResponse class provides an interace for Polly DescribeVoices responses.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::describeVoices
 */

/*!
 * Constructs a DescribeVoicesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVoicesResponse::DescribeVoicesResponse(
        const DescribeVoicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new DescribeVoicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVoicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVoicesRequest * DescribeVoicesResponse::request() const
{
    Q_D(const DescribeVoicesResponse);
    return static_cast<const DescribeVoicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly DescribeVoices \a response.
 */
void DescribeVoicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVoicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::DescribeVoicesResponsePrivate
 * \brief The DescribeVoicesResponsePrivate class provides private implementation for DescribeVoicesResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a DescribeVoicesResponsePrivate object with public implementation \a q.
 */
DescribeVoicesResponsePrivate::DescribeVoicesResponsePrivate(
    DescribeVoicesResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly DescribeVoices response element from \a xml.
 */
void DescribeVoicesResponsePrivate::parseDescribeVoicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVoicesResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
