// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmilestonesresponse.h"
#include "listmilestonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListMilestonesResponse
 * \brief The ListMilestonesResponse class provides an interace for WellArchitected ListMilestones responses.
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
 * \sa WellArchitectedClient::listMilestones
 */

/*!
 * Constructs a ListMilestonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMilestonesResponse::ListMilestonesResponse(
        const ListMilestonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListMilestonesResponsePrivate(this), parent)
{
    setRequest(new ListMilestonesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMilestonesRequest * ListMilestonesResponse::request() const
{
    Q_D(const ListMilestonesResponse);
    return static_cast<const ListMilestonesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListMilestones \a response.
 */
void ListMilestonesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMilestonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListMilestonesResponsePrivate
 * \brief The ListMilestonesResponsePrivate class provides private implementation for ListMilestonesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListMilestonesResponsePrivate object with public implementation \a q.
 */
ListMilestonesResponsePrivate::ListMilestonesResponsePrivate(
    ListMilestonesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListMilestones response element from \a xml.
 */
void ListMilestonesResponsePrivate::parseListMilestonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMilestonesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
