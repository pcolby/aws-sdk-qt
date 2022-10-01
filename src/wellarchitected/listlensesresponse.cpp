// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlensesresponse.h"
#include "listlensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensesResponse
 * \brief The ListLensesResponse class provides an interace for WellArchitected ListLenses responses.
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
 * \sa WellArchitectedClient::listLenses
 */

/*!
 * Constructs a ListLensesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLensesResponse::ListLensesResponse(
        const ListLensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListLensesResponsePrivate(this), parent)
{
    setRequest(new ListLensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLensesRequest * ListLensesResponse::request() const
{
    Q_D(const ListLensesResponse);
    return static_cast<const ListLensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListLenses \a response.
 */
void ListLensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListLensesResponsePrivate
 * \brief The ListLensesResponsePrivate class provides private implementation for ListLensesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensesResponsePrivate object with public implementation \a q.
 */
ListLensesResponsePrivate::ListLensesResponsePrivate(
    ListLensesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListLenses response element from \a xml.
 */
void ListLensesResponsePrivate::parseListLensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
