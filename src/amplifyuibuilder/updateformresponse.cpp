// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateformresponse.h"
#include "updateformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateFormResponse
 * \brief The UpdateFormResponse class provides an interace for AmplifyUIBuilder UpdateForm responses.
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
 * \sa AmplifyUIBuilderClient::updateForm
 */

/*!
 * Constructs a UpdateFormResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFormResponse::UpdateFormResponse(
        const UpdateFormRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new UpdateFormResponsePrivate(this), parent)
{
    setRequest(new UpdateFormRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFormRequest * UpdateFormResponse::request() const
{
    Q_D(const UpdateFormResponse);
    return static_cast<const UpdateFormRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder UpdateForm \a response.
 */
void UpdateFormResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFormResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateFormResponsePrivate
 * \brief The UpdateFormResponsePrivate class provides private implementation for UpdateFormResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateFormResponsePrivate object with public implementation \a q.
 */
UpdateFormResponsePrivate::UpdateFormResponsePrivate(
    UpdateFormResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder UpdateForm response element from \a xml.
 */
void UpdateFormResponsePrivate::parseUpdateFormResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFormResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
