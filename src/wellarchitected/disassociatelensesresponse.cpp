// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatelensesresponse.h"
#include "disassociatelensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DisassociateLensesResponse
 * \brief The DisassociateLensesResponse class provides an interace for WellArchitected DisassociateLenses responses.
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
 * \sa WellArchitectedClient::disassociateLenses
 */

/*!
 * Constructs a DisassociateLensesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateLensesResponse::DisassociateLensesResponse(
        const DisassociateLensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new DisassociateLensesResponsePrivate(this), parent)
{
    setRequest(new DisassociateLensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateLensesRequest * DisassociateLensesResponse::request() const
{
    Q_D(const DisassociateLensesResponse);
    return static_cast<const DisassociateLensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected DisassociateLenses \a response.
 */
void DisassociateLensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateLensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::DisassociateLensesResponsePrivate
 * \brief The DisassociateLensesResponsePrivate class provides private implementation for DisassociateLensesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DisassociateLensesResponsePrivate object with public implementation \a q.
 */
DisassociateLensesResponsePrivate::DisassociateLensesResponsePrivate(
    DisassociateLensesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected DisassociateLenses response element from \a xml.
 */
void DisassociateLensesResponsePrivate::parseDisassociateLensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateLensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
