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

#include "getmessagingsessionendpointresponse.h"
#include "getmessagingsessionendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::GetMessagingSessionEndpointResponse
 * \brief The GetMessagingSessionEndpointResponse class provides an interace for Chime GetMessagingSessionEndpoint responses.
 *
 * \inmodule QtAwsChime
 *
 *  The Amazon Chime API (application programming interface) is designed for developers to perform key tasks, such as
 *  creating and managing Amazon Chime accounts, users, and Voice Connectors. This guide provides detailed information about
 *  the Amazon Chime API, including operations, types, inputs and outputs, and error codes. It also includes some
 *  server-side API actions to use with the Amazon Chime SDK. For more information about the Amazon Chime SDK, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html"> Using the Amazon Chime SDK </a> in the <i>Amazon
 *  Chime Developer
 * 
 *  Guide</i>>
 * 
 *  You can use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to make API calls. We recommend using
 *  an AWS SDK or the AWS CLI. Each API operation includes links to information about using it with a language-specific AWS
 *  SDK or the AWS
 * 
 *  CLI> <dl> <dt>Using an AWS SDK</dt> <dd>
 * 
 *  You don't need to write code to calculate a signature for request authentication. The SDK clients authenticate your
 *  requests by using access keys that you provide. For more information about AWS SDKs, see the <a
 *  href="http://aws.amazon.com/developer/">AWS Developer Center</a>.
 * 
 *  </p </dd> <dt>Using the AWS CLI</dt> <dd>
 * 
 *  Use your access keys with the AWS CLI to make API calls. For information about setting up the AWS CLI, see <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing the AWS Command Line Interface</a> in
 *  the <i>AWS Command Line Interface User Guide</i>. For a list of available Amazon Chime commands, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon Chime commands</a> in the <i>AWS CLI
 *  Command Reference</i>.
 * 
 *  </p </dd> <dt>Using REST APIs</dt> <dd>
 * 
 *  If you use REST to make API calls, you must authenticate your request by providing a signature. Amazon Chime supports
 *  signature version 4. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a> in
 *  the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  When making REST API calls, use the service name <code>chime</code> and REST endpoint
 * 
 *  <code>https://service.chime.aws.amazon.com</code>> </dd> </dl>
 * 
 *  Administrative permissions are controlled using AWS Identity and Access Management (IAM). For more information, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/ag/security-iam.html">Identity and Access Management for Amazon Chime</a>
 *  in the <i>Amazon Chime Administration
 *
 * \sa ChimeClient::getMessagingSessionEndpoint
 */

/*!
 * Constructs a GetMessagingSessionEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetMessagingSessionEndpointResponse::GetMessagingSessionEndpointResponse(
        const GetMessagingSessionEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeResponse(new GetMessagingSessionEndpointResponsePrivate(this), parent)
{
    setRequest(new GetMessagingSessionEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMessagingSessionEndpointRequest * GetMessagingSessionEndpointResponse::request() const
{
    return static_cast<const GetMessagingSessionEndpointRequest *>(ChimeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Chime GetMessagingSessionEndpoint \a response.
 */
void GetMessagingSessionEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMessagingSessionEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Chime::GetMessagingSessionEndpointResponsePrivate
 * \brief The GetMessagingSessionEndpointResponsePrivate class provides private implementation for GetMessagingSessionEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a GetMessagingSessionEndpointResponsePrivate object with public implementation \a q.
 */
GetMessagingSessionEndpointResponsePrivate::GetMessagingSessionEndpointResponsePrivate(
    GetMessagingSessionEndpointResponse * const q) : ChimeResponsePrivate(q)
{

}

/*!
 * Parses a Chime GetMessagingSessionEndpoint response element from \a xml.
 */
void GetMessagingSessionEndpointResponsePrivate::parseGetMessagingSessionEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMessagingSessionEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Chime
} // namespace QtAws
