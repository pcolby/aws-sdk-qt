// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomponentresponse.h"
#include "createcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::CreateComponentResponse
 * \brief The CreateComponentResponse class provides an interace for AmplifyUIBuilder CreateComponent responses.
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
 * \sa AmplifyUIBuilderClient::createComponent
 */

/*!
 * Constructs a CreateComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComponentResponse::CreateComponentResponse(
        const CreateComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new CreateComponentResponsePrivate(this), parent)
{
    setRequest(new CreateComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComponentRequest * CreateComponentResponse::request() const
{
    Q_D(const CreateComponentResponse);
    return static_cast<const CreateComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder CreateComponent \a response.
 */
void CreateComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::CreateComponentResponsePrivate
 * \brief The CreateComponentResponsePrivate class provides private implementation for CreateComponentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a CreateComponentResponsePrivate object with public implementation \a q.
 */
CreateComponentResponsePrivate::CreateComponentResponsePrivate(
    CreateComponentResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder CreateComponent response element from \a xml.
 */
void CreateComponentResponsePrivate::parseCreateComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
