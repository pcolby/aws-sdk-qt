// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoriginaccesscontrolsresponse.h"
#include "listoriginaccesscontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListOriginAccessControlsResponse
 * \brief The ListOriginAccessControlsResponse class provides an interace for CloudFront ListOriginAccessControls responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listOriginAccessControls
 */

/*!
 * Constructs a ListOriginAccessControlsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOriginAccessControlsResponse::ListOriginAccessControlsResponse(
        const ListOriginAccessControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListOriginAccessControlsResponsePrivate(this), parent)
{
    setRequest(new ListOriginAccessControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOriginAccessControlsRequest * ListOriginAccessControlsResponse::request() const
{
    Q_D(const ListOriginAccessControlsResponse);
    return static_cast<const ListOriginAccessControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListOriginAccessControls \a response.
 */
void ListOriginAccessControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOriginAccessControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListOriginAccessControlsResponsePrivate
 * \brief The ListOriginAccessControlsResponsePrivate class provides private implementation for ListOriginAccessControlsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListOriginAccessControlsResponsePrivate object with public implementation \a q.
 */
ListOriginAccessControlsResponsePrivate::ListOriginAccessControlsResponsePrivate(
    ListOriginAccessControlsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListOriginAccessControls response element from \a xml.
 */
void ListOriginAccessControlsResponsePrivate::parseListOriginAccessControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOriginAccessControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
