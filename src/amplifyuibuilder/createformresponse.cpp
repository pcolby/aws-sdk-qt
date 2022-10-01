// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createformresponse.h"
#include "createformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::CreateFormResponse
 * \brief The CreateFormResponse class provides an interace for AmplifyUIBuilder CreateForm responses.
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
 * \sa AmplifyUIBuilderClient::createForm
 */

/*!
 * Constructs a CreateFormResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFormResponse::CreateFormResponse(
        const CreateFormRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new CreateFormResponsePrivate(this), parent)
{
    setRequest(new CreateFormRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFormRequest * CreateFormResponse::request() const
{
    Q_D(const CreateFormResponse);
    return static_cast<const CreateFormRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder CreateForm \a response.
 */
void CreateFormResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFormResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::CreateFormResponsePrivate
 * \brief The CreateFormResponsePrivate class provides private implementation for CreateFormResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a CreateFormResponsePrivate object with public implementation \a q.
 */
CreateFormResponsePrivate::CreateFormResponsePrivate(
    CreateFormResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder CreateForm response element from \a xml.
 */
void CreateFormResponsePrivate::parseCreateFormResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFormResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
