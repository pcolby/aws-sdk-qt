// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdigestresponse.h"
#include "getdigestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetDigestResponse
 * \brief The GetDigestResponse class provides an interace for Qldb GetDigest responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getDigest
 */

/*!
 * Constructs a GetDigestResponse object for \a reply to \a request, with parent \a parent.
 */
GetDigestResponse::GetDigestResponse(
        const GetDigestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetDigestResponsePrivate(this), parent)
{
    setRequest(new GetDigestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDigestRequest * GetDigestResponse::request() const
{
    Q_D(const GetDigestResponse);
    return static_cast<const GetDigestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb GetDigest \a response.
 */
void GetDigestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDigestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::GetDigestResponsePrivate
 * \brief The GetDigestResponsePrivate class provides private implementation for GetDigestResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetDigestResponsePrivate object with public implementation \a q.
 */
GetDigestResponsePrivate::GetDigestResponsePrivate(
    GetDigestResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb GetDigest response element from \a xml.
 */
void GetDigestResponsePrivate::parseGetDigestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDigestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
