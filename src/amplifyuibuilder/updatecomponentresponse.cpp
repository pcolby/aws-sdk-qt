// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponentresponse.h"
#include "updatecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateComponentResponse
 * \brief The UpdateComponentResponse class provides an interace for AmplifyUIBuilder UpdateComponent responses.
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
 * \sa AmplifyUIBuilderClient::updateComponent
 */

/*!
 * Constructs a UpdateComponentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateComponentResponse::UpdateComponentResponse(
        const UpdateComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new UpdateComponentResponsePrivate(this), parent)
{
    setRequest(new UpdateComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateComponentRequest * UpdateComponentResponse::request() const
{
    Q_D(const UpdateComponentResponse);
    return static_cast<const UpdateComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder UpdateComponent \a response.
 */
void UpdateComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateComponentResponsePrivate
 * \brief The UpdateComponentResponsePrivate class provides private implementation for UpdateComponentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateComponentResponsePrivate object with public implementation \a q.
 */
UpdateComponentResponsePrivate::UpdateComponentResponsePrivate(
    UpdateComponentResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder UpdateComponent response element from \a xml.
 */
void UpdateComponentResponsePrivate::parseUpdateComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
