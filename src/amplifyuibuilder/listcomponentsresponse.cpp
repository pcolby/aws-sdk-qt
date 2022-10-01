// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentsresponse.h"
#include "listcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListComponentsResponse
 * \brief The ListComponentsResponse class provides an interace for AmplifyUIBuilder ListComponents responses.
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
 * \sa AmplifyUIBuilderClient::listComponents
 */

/*!
 * Constructs a ListComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListComponentsResponse::ListComponentsResponse(
        const ListComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ListComponentsResponsePrivate(this), parent)
{
    setRequest(new ListComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComponentsRequest * ListComponentsResponse::request() const
{
    Q_D(const ListComponentsResponse);
    return static_cast<const ListComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ListComponents \a response.
 */
void ListComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListComponentsResponsePrivate
 * \brief The ListComponentsResponsePrivate class provides private implementation for ListComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListComponentsResponsePrivate object with public implementation \a q.
 */
ListComponentsResponsePrivate::ListComponentsResponsePrivate(
    ListComponentsResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ListComponents response element from \a xml.
 */
void ListComponentsResponsePrivate::parseListComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
