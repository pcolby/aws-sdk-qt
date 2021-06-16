/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
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
