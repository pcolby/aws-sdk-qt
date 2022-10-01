// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettelemetrymetadataresponse.h"
#include "gettelemetrymetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataResponse
 * \brief The GetTelemetryMetadataResponse class provides an interace for Inspector GetTelemetryMetadata responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getTelemetryMetadata
 */

/*!
 * Constructs a GetTelemetryMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetTelemetryMetadataResponse::GetTelemetryMetadataResponse(
        const GetTelemetryMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetTelemetryMetadataResponsePrivate(this), parent)
{
    setRequest(new GetTelemetryMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTelemetryMetadataRequest * GetTelemetryMetadataResponse::request() const
{
    Q_D(const GetTelemetryMetadataResponse);
    return static_cast<const GetTelemetryMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector GetTelemetryMetadata \a response.
 */
void GetTelemetryMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTelemetryMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataResponsePrivate
 * \brief The GetTelemetryMetadataResponsePrivate class provides private implementation for GetTelemetryMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetTelemetryMetadataResponsePrivate object with public implementation \a q.
 */
GetTelemetryMetadataResponsePrivate::GetTelemetryMetadataResponsePrivate(
    GetTelemetryMetadataResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector GetTelemetryMetadata response element from \a xml.
 */
void GetTelemetryMetadataResponsePrivate::parseGetTelemetryMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTelemetryMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
