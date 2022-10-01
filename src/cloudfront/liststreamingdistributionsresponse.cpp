// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingdistributionsresponse.h"
#include "liststreamingdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsResponse
 * \brief The ListStreamingDistributionsResponse class provides an interace for CloudFront ListStreamingDistributions responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listStreamingDistributions
 */

/*!
 * Constructs a ListStreamingDistributionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingDistributionsResponse::ListStreamingDistributionsResponse(
        const ListStreamingDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListStreamingDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingDistributionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingDistributionsRequest * ListStreamingDistributionsResponse::request() const
{
    Q_D(const ListStreamingDistributionsResponse);
    return static_cast<const ListStreamingDistributionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListStreamingDistributions \a response.
 */
void ListStreamingDistributionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsResponsePrivate
 * \brief The ListStreamingDistributionsResponsePrivate class provides private implementation for ListStreamingDistributionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListStreamingDistributionsResponsePrivate object with public implementation \a q.
 */
ListStreamingDistributionsResponsePrivate::ListStreamingDistributionsResponsePrivate(
    ListStreamingDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListStreamingDistributions response element from \a xml.
 */
void ListStreamingDistributionsResponsePrivate::parseListStreamingDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingDistributionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
