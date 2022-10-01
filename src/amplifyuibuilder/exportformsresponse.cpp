// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportformsresponse.h"
#include "exportformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportFormsResponse
 * \brief The ExportFormsResponse class provides an interace for AmplifyUIBuilder ExportForms responses.
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
 * \sa AmplifyUIBuilderClient::exportForms
 */

/*!
 * Constructs a ExportFormsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportFormsResponse::ExportFormsResponse(
        const ExportFormsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ExportFormsResponsePrivate(this), parent)
{
    setRequest(new ExportFormsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportFormsRequest * ExportFormsResponse::request() const
{
    Q_D(const ExportFormsResponse);
    return static_cast<const ExportFormsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ExportForms \a response.
 */
void ExportFormsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportFormsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportFormsResponsePrivate
 * \brief The ExportFormsResponsePrivate class provides private implementation for ExportFormsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportFormsResponsePrivate object with public implementation \a q.
 */
ExportFormsResponsePrivate::ExportFormsResponsePrivate(
    ExportFormsResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ExportForms response element from \a xml.
 */
void ExportFormsResponsePrivate::parseExportFormsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportFormsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
