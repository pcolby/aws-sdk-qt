// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteformresponse.h"
#include "deleteformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteFormResponse
 * \brief The DeleteFormResponse class provides an interace for AmplifyUIBuilder DeleteForm responses.
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
 * \sa AmplifyUIBuilderClient::deleteForm
 */

/*!
 * Constructs a DeleteFormResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFormResponse::DeleteFormResponse(
        const DeleteFormRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new DeleteFormResponsePrivate(this), parent)
{
    setRequest(new DeleteFormRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFormRequest * DeleteFormResponse::request() const
{
    Q_D(const DeleteFormResponse);
    return static_cast<const DeleteFormRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder DeleteForm \a response.
 */
void DeleteFormResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFormResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteFormResponsePrivate
 * \brief The DeleteFormResponsePrivate class provides private implementation for DeleteFormResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a DeleteFormResponsePrivate object with public implementation \a q.
 */
DeleteFormResponsePrivate::DeleteFormResponsePrivate(
    DeleteFormResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder DeleteForm response element from \a xml.
 */
void DeleteFormResponsePrivate::parseDeleteFormResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFormResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
