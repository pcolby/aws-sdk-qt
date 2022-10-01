// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listkeygroupsresponse.h"
#include "listkeygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListKeyGroupsResponse
 * \brief The ListKeyGroupsResponse class provides an interace for CloudFront ListKeyGroups responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listKeyGroups
 */

/*!
 * Constructs a ListKeyGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListKeyGroupsResponse::ListKeyGroupsResponse(
        const ListKeyGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListKeyGroupsResponsePrivate(this), parent)
{
    setRequest(new ListKeyGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListKeyGroupsRequest * ListKeyGroupsResponse::request() const
{
    Q_D(const ListKeyGroupsResponse);
    return static_cast<const ListKeyGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListKeyGroups \a response.
 */
void ListKeyGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListKeyGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListKeyGroupsResponsePrivate
 * \brief The ListKeyGroupsResponsePrivate class provides private implementation for ListKeyGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListKeyGroupsResponsePrivate object with public implementation \a q.
 */
ListKeyGroupsResponsePrivate::ListKeyGroupsResponsePrivate(
    ListKeyGroupsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListKeyGroups response element from \a xml.
 */
void ListKeyGroupsResponsePrivate::parseListKeyGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKeyGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
