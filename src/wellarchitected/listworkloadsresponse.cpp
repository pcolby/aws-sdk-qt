// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkloadsresponse.h"
#include "listworkloadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListWorkloadsResponse
 * \brief The ListWorkloadsResponse class provides an interace for WellArchitected ListWorkloads responses.
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
 * \sa WellArchitectedClient::listWorkloads
 */

/*!
 * Constructs a ListWorkloadsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkloadsResponse::ListWorkloadsResponse(
        const ListWorkloadsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListWorkloadsResponsePrivate(this), parent)
{
    setRequest(new ListWorkloadsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkloadsRequest * ListWorkloadsResponse::request() const
{
    Q_D(const ListWorkloadsResponse);
    return static_cast<const ListWorkloadsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListWorkloads \a response.
 */
void ListWorkloadsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkloadsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListWorkloadsResponsePrivate
 * \brief The ListWorkloadsResponsePrivate class provides private implementation for ListWorkloadsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListWorkloadsResponsePrivate object with public implementation \a q.
 */
ListWorkloadsResponsePrivate::ListWorkloadsResponsePrivate(
    ListWorkloadsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListWorkloads response element from \a xml.
 */
void ListWorkloadsResponsePrivate::parseListWorkloadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkloadsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
