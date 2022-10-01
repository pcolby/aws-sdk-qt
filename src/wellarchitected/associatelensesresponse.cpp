// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelensesresponse.h"
#include "associatelensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::AssociateLensesResponse
 * \brief The AssociateLensesResponse class provides an interace for WellArchitected AssociateLenses responses.
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
 * \sa WellArchitectedClient::associateLenses
 */

/*!
 * Constructs a AssociateLensesResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLensesResponse::AssociateLensesResponse(
        const AssociateLensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new AssociateLensesResponsePrivate(this), parent)
{
    setRequest(new AssociateLensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLensesRequest * AssociateLensesResponse::request() const
{
    Q_D(const AssociateLensesResponse);
    return static_cast<const AssociateLensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected AssociateLenses \a response.
 */
void AssociateLensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::AssociateLensesResponsePrivate
 * \brief The AssociateLensesResponsePrivate class provides private implementation for AssociateLensesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a AssociateLensesResponsePrivate object with public implementation \a q.
 */
AssociateLensesResponsePrivate::AssociateLensesResponsePrivate(
    AssociateLensesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected AssociateLenses response element from \a xml.
 */
void AssociateLensesResponsePrivate::parseAssociateLensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
