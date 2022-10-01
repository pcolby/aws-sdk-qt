// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetjobbookmarkresponse.h"
#include "resetjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResetJobBookmarkResponse
 * \brief The ResetJobBookmarkResponse class provides an interace for Glue ResetJobBookmark responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::resetJobBookmark
 */

/*!
 * Constructs a ResetJobBookmarkResponse object for \a reply to \a request, with parent \a parent.
 */
ResetJobBookmarkResponse::ResetJobBookmarkResponse(
        const ResetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ResetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new ResetJobBookmarkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetJobBookmarkRequest * ResetJobBookmarkResponse::request() const
{
    Q_D(const ResetJobBookmarkResponse);
    return static_cast<const ResetJobBookmarkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ResetJobBookmark \a response.
 */
void ResetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetJobBookmarkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ResetJobBookmarkResponsePrivate
 * \brief The ResetJobBookmarkResponsePrivate class provides private implementation for ResetJobBookmarkResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResetJobBookmarkResponsePrivate object with public implementation \a q.
 */
ResetJobBookmarkResponsePrivate::ResetJobBookmarkResponsePrivate(
    ResetJobBookmarkResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ResetJobBookmark response element from \a xml.
 */
void ResetJobBookmarkResponsePrivate::parseResetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetJobBookmarkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
