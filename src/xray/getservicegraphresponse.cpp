// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicegraphresponse.h"
#include "getservicegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetServiceGraphResponse
 * \brief The GetServiceGraphResponse class provides an interace for XRay GetServiceGraph responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getServiceGraph
 */

/*!
 * Constructs a GetServiceGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceGraphResponse::GetServiceGraphResponse(
        const GetServiceGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetServiceGraphResponsePrivate(this), parent)
{
    setRequest(new GetServiceGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceGraphRequest * GetServiceGraphResponse::request() const
{
    Q_D(const GetServiceGraphResponse);
    return static_cast<const GetServiceGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetServiceGraph \a response.
 */
void GetServiceGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetServiceGraphResponsePrivate
 * \brief The GetServiceGraphResponsePrivate class provides private implementation for GetServiceGraphResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetServiceGraphResponsePrivate object with public implementation \a q.
 */
GetServiceGraphResponsePrivate::GetServiceGraphResponsePrivate(
    GetServiceGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetServiceGraph response element from \a xml.
 */
void GetServiceGraphResponsePrivate::parseGetServiceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
