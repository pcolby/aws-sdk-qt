// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblockresponse.h"
#include "getblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetBlockResponse
 * \brief The GetBlockResponse class provides an interace for Qldb GetBlock responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getBlock
 */

/*!
 * Constructs a GetBlockResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlockResponse::GetBlockResponse(
        const GetBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetBlockResponsePrivate(this), parent)
{
    setRequest(new GetBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlockRequest * GetBlockResponse::request() const
{
    Q_D(const GetBlockResponse);
    return static_cast<const GetBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb GetBlock \a response.
 */
void GetBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::GetBlockResponsePrivate
 * \brief The GetBlockResponsePrivate class provides private implementation for GetBlockResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetBlockResponsePrivate object with public implementation \a q.
 */
GetBlockResponsePrivate::GetBlockResponsePrivate(
    GetBlockResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb GetBlock response element from \a xml.
 */
void GetBlockResponsePrivate::parseGetBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
