// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportthemesresponse.h"
#include "exportthemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportThemesResponse
 * \brief The ExportThemesResponse class provides an interace for AmplifyUIBuilder ExportThemes responses.
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
 * \sa AmplifyUIBuilderClient::exportThemes
 */

/*!
 * Constructs a ExportThemesResponse object for \a reply to \a request, with parent \a parent.
 */
ExportThemesResponse::ExportThemesResponse(
        const ExportThemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ExportThemesResponsePrivate(this), parent)
{
    setRequest(new ExportThemesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportThemesRequest * ExportThemesResponse::request() const
{
    Q_D(const ExportThemesResponse);
    return static_cast<const ExportThemesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ExportThemes \a response.
 */
void ExportThemesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportThemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportThemesResponsePrivate
 * \brief The ExportThemesResponsePrivate class provides private implementation for ExportThemesResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportThemesResponsePrivate object with public implementation \a q.
 */
ExportThemesResponsePrivate::ExportThemesResponsePrivate(
    ExportThemesResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ExportThemes response element from \a xml.
 */
void ExportThemesResponsePrivate::parseExportThemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportThemesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
