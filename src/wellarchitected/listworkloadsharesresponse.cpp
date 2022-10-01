// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkloadsharesresponse.h"
#include "listworkloadsharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesResponse
 * \brief The ListWorkloadSharesResponse class provides an interace for WellArchitected ListWorkloadShares responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listWorkloadShares
 */

/*!
 * Constructs a ListWorkloadSharesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkloadSharesResponse::ListWorkloadSharesResponse(
        const ListWorkloadSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListWorkloadSharesResponsePrivate(this), parent)
{
    setRequest(new ListWorkloadSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkloadSharesRequest * ListWorkloadSharesResponse::request() const
{
    Q_D(const ListWorkloadSharesResponse);
    return static_cast<const ListWorkloadSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListWorkloadShares \a response.
 */
void ListWorkloadSharesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkloadSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesResponsePrivate
 * \brief The ListWorkloadSharesResponsePrivate class provides private implementation for ListWorkloadSharesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListWorkloadSharesResponsePrivate object with public implementation \a q.
 */
ListWorkloadSharesResponsePrivate::ListWorkloadSharesResponsePrivate(
    ListWorkloadSharesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListWorkloadShares response element from \a xml.
 */
void ListWorkloadSharesResponsePrivate::parseListWorkloadSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkloadSharesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
