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

#include "updateeventsourcemappingresponse.h"
#include "updateeventsourcemappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::UpdateEventSourceMappingResponse
 * \brief The UpdateEventSourceMappingResponse class provides an interace for Lambda UpdateEventSourceMapping responses.
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
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::updateEventSourceMapping
 */

/*!
 * Constructs a UpdateEventSourceMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEventSourceMappingResponse::UpdateEventSourceMappingResponse(
        const UpdateEventSourceMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateEventSourceMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateEventSourceMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEventSourceMappingRequest * UpdateEventSourceMappingResponse::request() const
{
    Q_D(const UpdateEventSourceMappingResponse);
    return static_cast<const UpdateEventSourceMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda UpdateEventSourceMapping \a response.
 */
void UpdateEventSourceMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEventSourceMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::UpdateEventSourceMappingResponsePrivate
 * \brief The UpdateEventSourceMappingResponsePrivate class provides private implementation for UpdateEventSourceMappingResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a UpdateEventSourceMappingResponsePrivate object with public implementation \a q.
 */
UpdateEventSourceMappingResponsePrivate::UpdateEventSourceMappingResponsePrivate(
    UpdateEventSourceMappingResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda UpdateEventSourceMapping response element from \a xml.
 */
void UpdateEventSourceMappingResponsePrivate::parseUpdateEventSourceMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventSourceMappingResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
