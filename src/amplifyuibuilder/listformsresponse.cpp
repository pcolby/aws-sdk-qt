// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listformsresponse.h"
#include "listformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListFormsResponse
 * \brief The ListFormsResponse class provides an interace for AmplifyUIBuilder ListForms responses.
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
 * \sa AmplifyUIBuilderClient::listForms
 */

/*!
 * Constructs a ListFormsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFormsResponse::ListFormsResponse(
        const ListFormsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ListFormsResponsePrivate(this), parent)
{
    setRequest(new ListFormsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFormsRequest * ListFormsResponse::request() const
{
    Q_D(const ListFormsResponse);
    return static_cast<const ListFormsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ListForms \a response.
 */
void ListFormsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFormsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListFormsResponsePrivate
 * \brief The ListFormsResponsePrivate class provides private implementation for ListFormsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListFormsResponsePrivate object with public implementation \a q.
 */
ListFormsResponsePrivate::ListFormsResponsePrivate(
    ListFormsResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ListForms response element from \a xml.
 */
void ListFormsResponsePrivate::parseListFormsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFormsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
