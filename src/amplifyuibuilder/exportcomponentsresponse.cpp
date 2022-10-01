// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportcomponentsresponse.h"
#include "exportcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportComponentsResponse
 * \brief The ExportComponentsResponse class provides an interace for AmplifyUIBuilder ExportComponents responses.
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
 * \sa AmplifyUIBuilderClient::exportComponents
 */

/*!
 * Constructs a ExportComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportComponentsResponse::ExportComponentsResponse(
        const ExportComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new ExportComponentsResponsePrivate(this), parent)
{
    setRequest(new ExportComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportComponentsRequest * ExportComponentsResponse::request() const
{
    Q_D(const ExportComponentsResponse);
    return static_cast<const ExportComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder ExportComponents \a response.
 */
void ExportComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportComponentsResponsePrivate
 * \brief The ExportComponentsResponsePrivate class provides private implementation for ExportComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportComponentsResponsePrivate object with public implementation \a q.
 */
ExportComponentsResponsePrivate::ExportComponentsResponsePrivate(
    ExportComponentsResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder ExportComponents response element from \a xml.
 */
void ExportComponentsResponsePrivate::parseExportComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
