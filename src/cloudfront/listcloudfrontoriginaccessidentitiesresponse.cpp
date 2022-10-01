// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "listcloudfrontoriginaccessidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesResponse
 * \brief The ListCloudFrontOriginAccessIdentitiesResponse class provides an interace for CloudFront ListCloudFrontOriginAccessIdentities responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCloudFrontOriginAccessIdentities
 */

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCloudFrontOriginAccessIdentitiesResponse::ListCloudFrontOriginAccessIdentitiesResponse(
        const ListCloudFrontOriginAccessIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListCloudFrontOriginAccessIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListCloudFrontOriginAccessIdentitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCloudFrontOriginAccessIdentitiesRequest * ListCloudFrontOriginAccessIdentitiesResponse::request() const
{
    Q_D(const ListCloudFrontOriginAccessIdentitiesResponse);
    return static_cast<const ListCloudFrontOriginAccessIdentitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListCloudFrontOriginAccessIdentities \a response.
 */
void ListCloudFrontOriginAccessIdentitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCloudFrontOriginAccessIdentitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesResponsePrivate
 * \brief The ListCloudFrontOriginAccessIdentitiesResponsePrivate class provides private implementation for ListCloudFrontOriginAccessIdentitiesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesResponsePrivate object with public implementation \a q.
 */
ListCloudFrontOriginAccessIdentitiesResponsePrivate::ListCloudFrontOriginAccessIdentitiesResponsePrivate(
    ListCloudFrontOriginAccessIdentitiesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListCloudFrontOriginAccessIdentities response element from \a xml.
 */
void ListCloudFrontOriginAccessIdentitiesResponsePrivate::parseListCloudFrontOriginAccessIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCloudFrontOriginAccessIdentitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
