// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponentresponse.h"
#include "getcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetComponentResponse
 * \brief The GetComponentResponse class provides an interace for AmplifyUIBuilder GetComponent responses.
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
 * \sa AmplifyUIBuilderClient::getComponent
 */

/*!
 * Constructs a GetComponentResponse object for \a reply to \a request, with parent \a parent.
 */
GetComponentResponse::GetComponentResponse(
        const GetComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new GetComponentResponsePrivate(this), parent)
{
    setRequest(new GetComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComponentRequest * GetComponentResponse::request() const
{
    Q_D(const GetComponentResponse);
    return static_cast<const GetComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder GetComponent \a response.
 */
void GetComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetComponentResponsePrivate
 * \brief The GetComponentResponsePrivate class provides private implementation for GetComponentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetComponentResponsePrivate object with public implementation \a q.
 */
GetComponentResponsePrivate::GetComponentResponsePrivate(
    GetComponentResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder GetComponent response element from \a xml.
 */
void GetComponentResponsePrivate::parseGetComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
