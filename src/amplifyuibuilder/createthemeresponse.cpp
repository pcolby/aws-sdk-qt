// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createthemeresponse.h"
#include "createthemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::CreateThemeResponse
 * \brief The CreateThemeResponse class provides an interace for AmplifyUIBuilder CreateTheme responses.
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
 * \sa AmplifyUIBuilderClient::createTheme
 */

/*!
 * Constructs a CreateThemeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThemeResponse::CreateThemeResponse(
        const CreateThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new CreateThemeResponsePrivate(this), parent)
{
    setRequest(new CreateThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThemeRequest * CreateThemeResponse::request() const
{
    Q_D(const CreateThemeResponse);
    return static_cast<const CreateThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder CreateTheme \a response.
 */
void CreateThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::CreateThemeResponsePrivate
 * \brief The CreateThemeResponsePrivate class provides private implementation for CreateThemeResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a CreateThemeResponsePrivate object with public implementation \a q.
 */
CreateThemeResponsePrivate::CreateThemeResponsePrivate(
    CreateThemeResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder CreateTheme response element from \a xml.
 */
void CreateThemeResponsePrivate::parseCreateThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
