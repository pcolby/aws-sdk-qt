// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecomponentresponse.h"
#include "deletecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteComponentResponse
 * \brief The DeleteComponentResponse class provides an interace for AmplifyUIBuilder DeleteComponent responses.
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
 * \sa AmplifyUIBuilderClient::deleteComponent
 */

/*!
 * Constructs a DeleteComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComponentResponse::DeleteComponentResponse(
        const DeleteComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new DeleteComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComponentRequest * DeleteComponentResponse::request() const
{
    Q_D(const DeleteComponentResponse);
    return static_cast<const DeleteComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder DeleteComponent \a response.
 */
void DeleteComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteComponentResponsePrivate
 * \brief The DeleteComponentResponsePrivate class provides private implementation for DeleteComponentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a DeleteComponentResponsePrivate object with public implementation \a q.
 */
DeleteComponentResponsePrivate::DeleteComponentResponsePrivate(
    DeleteComponentResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder DeleteComponent response element from \a xml.
 */
void DeleteComponentResponsePrivate::parseDeleteComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
