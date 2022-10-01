// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobbookmarkresponse.h"
#include "getjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobBookmarkResponse
 * \brief The GetJobBookmarkResponse class provides an interace for Glue GetJobBookmark responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobBookmark
 */

/*!
 * Constructs a GetJobBookmarkResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobBookmarkResponse::GetJobBookmarkResponse(
        const GetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new GetJobBookmarkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobBookmarkRequest * GetJobBookmarkResponse::request() const
{
    Q_D(const GetJobBookmarkResponse);
    return static_cast<const GetJobBookmarkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobBookmark \a response.
 */
void GetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobBookmarkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobBookmarkResponsePrivate
 * \brief The GetJobBookmarkResponsePrivate class provides private implementation for GetJobBookmarkResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobBookmarkResponsePrivate object with public implementation \a q.
 */
GetJobBookmarkResponsePrivate::GetJobBookmarkResponsePrivate(
    GetJobBookmarkResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobBookmark response element from \a xml.
 */
void GetJobBookmarkResponsePrivate::parseGetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobBookmarkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
