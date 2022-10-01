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

#include "exchangecodefortokenresponse.h"
#include "exchangecodefortokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExchangeCodeForTokenResponse
 * \brief The ExchangeCodeForTokenResponse class provides an interace for AmplifyUIBuilder ExchangeCodeForToken responses.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 *
 *  The Amplify UI Builder API provides a programmatic interface for creating and configuring user interface (UI) component
 *  libraries and themes for use in your Amplify applications. You can then connect these UI components to an application's
 *  backend Amazon Web Services
 * 
 *  resources>
 * 
 *  You can also use the Amplify Studio visual designer to create UI components and model data for an app. For more
 *  information, see <a href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the <i>Amplify
 * 
 *  Docs</i>>
 * 
 *  The Amplify Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development.
 *  For more information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>. For more information about
 *  deploying an Amplify application to Amazon Web Services, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify User
 *
 * \sa AmplifyUIBuilderClient::exchangeCodeForToken
 */

/*!
 * Constructs a ExchangeCodeForTokenResponse object for \a reply to \a request, with parent \a parent.
 */
ExchangeCodeForTokenResponse::ExchangeCodeForTokenResponse(
        const ExchangeCodeForTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ExchangeCodeForTokenResponsePrivate(this), parent)
{
    setRequest(new ExchangeCodeForTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExchangeCodeForTokenRequest * ExchangeCodeForTokenResponse::request() const
{
    Q_D(const ExchangeCodeForTokenResponse);
    return static_cast<const ExchangeCodeForTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ExchangeCodeForToken \a response.
 */
void ExchangeCodeForTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExchangeCodeForTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExchangeCodeForTokenResponsePrivate
 * \brief The ExchangeCodeForTokenResponsePrivate class provides private implementation for ExchangeCodeForTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExchangeCodeForTokenResponsePrivate object with public implementation \a q.
 */
ExchangeCodeForTokenResponsePrivate::ExchangeCodeForTokenResponsePrivate(
    ExchangeCodeForTokenResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ExchangeCodeForToken response element from \a xml.
 */
void ExchangeCodeForTokenResponsePrivate::parseExchangeCodeForTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExchangeCodeForTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
