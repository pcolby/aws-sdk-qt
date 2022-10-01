// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatememberresponse.h"
#include "disassociatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisassociateMemberResponse
 * \brief The DisassociateMemberResponse class provides an interace for Macie2 DisassociateMember responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disassociateMember
 */

/*!
 * Constructs a DisassociateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMemberResponse::DisassociateMemberResponse(
        const DisassociateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DisassociateMemberResponsePrivate(this), parent)
{
    setRequest(new DisassociateMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMemberRequest * DisassociateMemberResponse::request() const
{
    Q_D(const DisassociateMemberResponse);
    return static_cast<const DisassociateMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DisassociateMember \a response.
 */
void DisassociateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DisassociateMemberResponsePrivate
 * \brief The DisassociateMemberResponsePrivate class provides private implementation for DisassociateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisassociateMemberResponsePrivate object with public implementation \a q.
 */
DisassociateMemberResponsePrivate::DisassociateMemberResponsePrivate(
    DisassociateMemberResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DisassociateMember response element from \a xml.
 */
void DisassociateMemberResponsePrivate::parseDisassociateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
