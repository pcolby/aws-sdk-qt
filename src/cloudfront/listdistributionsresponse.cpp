// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsresponse.h"
#include "listdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsResponse
 * \brief The ListDistributionsResponse class provides an interace for CloudFront ListDistributions responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributions
 */

/*!
 * Constructs a ListDistributionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionsResponse::ListDistributionsResponse(
        const ListDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionsRequest * ListDistributionsResponse::request() const
{
    Q_D(const ListDistributionsResponse);
    return static_cast<const ListDistributionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListDistributions \a response.
 */
void ListDistributionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListDistributionsResponsePrivate
 * \brief The ListDistributionsResponsePrivate class provides private implementation for ListDistributionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsResponsePrivate object with public implementation \a q.
 */
ListDistributionsResponsePrivate::ListDistributionsResponsePrivate(
    ListDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListDistributions response element from \a xml.
 */
void ListDistributionsResponsePrivate::parseListDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
