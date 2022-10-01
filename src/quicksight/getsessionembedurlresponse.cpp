// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionembedurlresponse.h"
#include "getsessionembedurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlResponse
 * \brief The GetSessionEmbedUrlResponse class provides an interace for QuickSight GetSessionEmbedUrl responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::getSessionEmbedUrl
 */

/*!
 * Constructs a GetSessionEmbedUrlResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionEmbedUrlResponse::GetSessionEmbedUrlResponse(
        const GetSessionEmbedUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new GetSessionEmbedUrlResponsePrivate(this), parent)
{
    setRequest(new GetSessionEmbedUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionEmbedUrlRequest * GetSessionEmbedUrlResponse::request() const
{
    Q_D(const GetSessionEmbedUrlResponse);
    return static_cast<const GetSessionEmbedUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight GetSessionEmbedUrl \a response.
 */
void GetSessionEmbedUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionEmbedUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlResponsePrivate
 * \brief The GetSessionEmbedUrlResponsePrivate class provides private implementation for GetSessionEmbedUrlResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GetSessionEmbedUrlResponsePrivate object with public implementation \a q.
 */
GetSessionEmbedUrlResponsePrivate::GetSessionEmbedUrlResponsePrivate(
    GetSessionEmbedUrlResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight GetSessionEmbedUrl response element from \a xml.
 */
void GetSessionEmbedUrlResponsePrivate::parseGetSessionEmbedUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionEmbedUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
