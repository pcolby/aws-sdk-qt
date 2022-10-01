// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethemeresponse.h"
#include "deletethemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteThemeResponse
 * \brief The DeleteThemeResponse class provides an interace for AmplifyUIBuilder DeleteTheme responses.
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
 * \sa AmplifyUIBuilderClient::deleteTheme
 */

/*!
 * Constructs a DeleteThemeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThemeResponse::DeleteThemeResponse(
        const DeleteThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new DeleteThemeResponsePrivate(this), parent)
{
    setRequest(new DeleteThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThemeRequest * DeleteThemeResponse::request() const
{
    Q_D(const DeleteThemeResponse);
    return static_cast<const DeleteThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder DeleteTheme \a response.
 */
void DeleteThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteThemeResponsePrivate
 * \brief The DeleteThemeResponsePrivate class provides private implementation for DeleteThemeResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a DeleteThemeResponsePrivate object with public implementation \a q.
 */
DeleteThemeResponsePrivate::DeleteThemeResponsePrivate(
    DeleteThemeResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder DeleteTheme response element from \a xml.
 */
void DeleteThemeResponsePrivate::parseDeleteThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
