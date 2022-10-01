// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthemeresponse.h"
#include "getthemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetThemeResponse
 * \brief The GetThemeResponse class provides an interace for AmplifyUIBuilder GetTheme responses.
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
 * \sa AmplifyUIBuilderClient::getTheme
 */

/*!
 * Constructs a GetThemeResponse object for \a reply to \a request, with parent \a parent.
 */
GetThemeResponse::GetThemeResponse(
        const GetThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new GetThemeResponsePrivate(this), parent)
{
    setRequest(new GetThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThemeRequest * GetThemeResponse::request() const
{
    Q_D(const GetThemeResponse);
    return static_cast<const GetThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder GetTheme \a response.
 */
void GetThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetThemeResponsePrivate
 * \brief The GetThemeResponsePrivate class provides private implementation for GetThemeResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetThemeResponsePrivate object with public implementation \a q.
 */
GetThemeResponsePrivate::GetThemeResponsePrivate(
    GetThemeResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder GetTheme response element from \a xml.
 */
void GetThemeResponsePrivate::parseGetThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
