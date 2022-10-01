// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinvalidationsresponse.h"
#include "listinvalidationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListInvalidationsResponse
 * \brief The ListInvalidationsResponse class provides an interace for CloudFront ListInvalidations responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listInvalidations
 */

/*!
 * Constructs a ListInvalidationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInvalidationsResponse::ListInvalidationsResponse(
        const ListInvalidationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListInvalidationsResponsePrivate(this), parent)
{
    setRequest(new ListInvalidationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInvalidationsRequest * ListInvalidationsResponse::request() const
{
    Q_D(const ListInvalidationsResponse);
    return static_cast<const ListInvalidationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListInvalidations \a response.
 */
void ListInvalidationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInvalidationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListInvalidationsResponsePrivate
 * \brief The ListInvalidationsResponsePrivate class provides private implementation for ListInvalidationsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListInvalidationsResponsePrivate object with public implementation \a q.
 */
ListInvalidationsResponsePrivate::ListInvalidationsResponsePrivate(
    ListInvalidationsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListInvalidations response element from \a xml.
 */
void ListInvalidationsResponsePrivate::parseListInvalidationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvalidationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
