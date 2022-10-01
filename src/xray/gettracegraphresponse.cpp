// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettracegraphresponse.h"
#include "gettracegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceGraphResponse
 * \brief The GetTraceGraphResponse class provides an interace for XRay GetTraceGraph responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTraceGraph
 */

/*!
 * Constructs a GetTraceGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetTraceGraphResponse::GetTraceGraphResponse(
        const GetTraceGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceGraphResponsePrivate(this), parent)
{
    setRequest(new GetTraceGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTraceGraphRequest * GetTraceGraphResponse::request() const
{
    Q_D(const GetTraceGraphResponse);
    return static_cast<const GetTraceGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetTraceGraph \a response.
 */
void GetTraceGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTraceGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetTraceGraphResponsePrivate
 * \brief The GetTraceGraphResponsePrivate class provides private implementation for GetTraceGraphResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceGraphResponsePrivate object with public implementation \a q.
 */
GetTraceGraphResponsePrivate::GetTraceGraphResponsePrivate(
    GetTraceGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetTraceGraph response element from \a xml.
 */
void GetTraceGraphResponsePrivate::parseGetTraceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
