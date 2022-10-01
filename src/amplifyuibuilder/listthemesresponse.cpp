// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemesresponse.h"
#include "listthemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListThemesResponse
 * \brief The ListThemesResponse class provides an interace for AmplifyUIBuilder ListThemes responses.
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
 * \sa AmplifyUIBuilderClient::listThemes
 */

/*!
 * Constructs a ListThemesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemesResponse::ListThemesResponse(
        const ListThemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ListThemesResponsePrivate(this), parent)
{
    setRequest(new ListThemesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemesRequest * ListThemesResponse::request() const
{
    Q_D(const ListThemesResponse);
    return static_cast<const ListThemesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ListThemes \a response.
 */
void ListThemesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListThemesResponsePrivate
 * \brief The ListThemesResponsePrivate class provides private implementation for ListThemesResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListThemesResponsePrivate object with public implementation \a q.
 */
ListThemesResponsePrivate::ListThemesResponsePrivate(
    ListThemesResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ListThemes response element from \a xml.
 */
void ListThemesResponsePrivate::parseListThemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
