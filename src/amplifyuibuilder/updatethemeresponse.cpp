// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemeresponse.h"
#include "updatethemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateThemeResponse
 * \brief The UpdateThemeResponse class provides an interace for AmplifyUIBuilder UpdateTheme responses.
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
 * \sa AmplifyUIBuilderClient::updateTheme
 */

/*!
 * Constructs a UpdateThemeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThemeResponse::UpdateThemeResponse(
        const UpdateThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new UpdateThemeResponsePrivate(this), parent)
{
    setRequest(new UpdateThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThemeRequest * UpdateThemeResponse::request() const
{
    Q_D(const UpdateThemeResponse);
    return static_cast<const UpdateThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder UpdateTheme \a response.
 */
void UpdateThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateThemeResponsePrivate
 * \brief The UpdateThemeResponsePrivate class provides private implementation for UpdateThemeResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateThemeResponsePrivate object with public implementation \a q.
 */
UpdateThemeResponsePrivate::UpdateThemeResponsePrivate(
    UpdateThemeResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder UpdateTheme response element from \a xml.
 */
void UpdateThemeResponsePrivate::parseUpdateThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
