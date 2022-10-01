// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnapshotsresponse.h"
#include "getsnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::GetSnapshotsResponse
 * \brief The GetSnapshotsResponse class provides an interace for Kendra GetSnapshots responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::getSnapshots
 */

/*!
 * Constructs a GetSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnapshotsResponse::GetSnapshotsResponse(
        const GetSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new GetSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnapshotsRequest * GetSnapshotsResponse::request() const
{
    Q_D(const GetSnapshotsResponse);
    return static_cast<const GetSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra GetSnapshots \a response.
 */
void GetSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::GetSnapshotsResponsePrivate
 * \brief The GetSnapshotsResponsePrivate class provides private implementation for GetSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a GetSnapshotsResponsePrivate object with public implementation \a q.
 */
GetSnapshotsResponsePrivate::GetSnapshotsResponsePrivate(
    GetSnapshotsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra GetSnapshots response element from \a xml.
 */
void GetSnapshotsResponsePrivate::parseGetSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
