// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregionalbucketsresponse.h"
#include "listregionalbucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListRegionalBucketsResponse
 * \brief The ListRegionalBucketsResponse class provides an interace for S3Control ListRegionalBuckets responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listRegionalBuckets
 */

/*!
 * Constructs a ListRegionalBucketsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRegionalBucketsResponse::ListRegionalBucketsResponse(
        const ListRegionalBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListRegionalBucketsResponsePrivate(this), parent)
{
    setRequest(new ListRegionalBucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRegionalBucketsRequest * ListRegionalBucketsResponse::request() const
{
    Q_D(const ListRegionalBucketsResponse);
    return static_cast<const ListRegionalBucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListRegionalBuckets \a response.
 */
void ListRegionalBucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRegionalBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListRegionalBucketsResponsePrivate
 * \brief The ListRegionalBucketsResponsePrivate class provides private implementation for ListRegionalBucketsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListRegionalBucketsResponsePrivate object with public implementation \a q.
 */
ListRegionalBucketsResponsePrivate::ListRegionalBucketsResponsePrivate(
    ListRegionalBucketsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListRegionalBuckets response element from \a xml.
 */
void ListRegionalBucketsResponsePrivate::parseListRegionalBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegionalBucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
