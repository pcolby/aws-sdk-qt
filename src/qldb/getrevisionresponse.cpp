// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrevisionresponse.h"
#include "getrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetRevisionResponse
 * \brief The GetRevisionResponse class provides an interace for Qldb GetRevision responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getRevision
 */

/*!
 * Constructs a GetRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
GetRevisionResponse::GetRevisionResponse(
        const GetRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetRevisionResponsePrivate(this), parent)
{
    setRequest(new GetRevisionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRevisionRequest * GetRevisionResponse::request() const
{
    Q_D(const GetRevisionResponse);
    return static_cast<const GetRevisionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb GetRevision \a response.
 */
void GetRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::GetRevisionResponsePrivate
 * \brief The GetRevisionResponsePrivate class provides private implementation for GetRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetRevisionResponsePrivate object with public implementation \a q.
 */
GetRevisionResponsePrivate::GetRevisionResponsePrivate(
    GetRevisionResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb GetRevision response element from \a xml.
 */
void GetRevisionResponsePrivate::parseGetRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
