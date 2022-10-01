// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmemberresponse.h"
#include "getmemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetMemberResponse
 * \brief The GetMemberResponse class provides an interace for Macie2 GetMember responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getMember
 */

/*!
 * Constructs a GetMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetMemberResponse::GetMemberResponse(
        const GetMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetMemberResponsePrivate(this), parent)
{
    setRequest(new GetMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMemberRequest * GetMemberResponse::request() const
{
    Q_D(const GetMemberResponse);
    return static_cast<const GetMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetMember \a response.
 */
void GetMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetMemberResponsePrivate
 * \brief The GetMemberResponsePrivate class provides private implementation for GetMemberResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetMemberResponsePrivate object with public implementation \a q.
 */
GetMemberResponsePrivate::GetMemberResponsePrivate(
    GetMemberResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetMember response element from \a xml.
 */
void GetMemberResponsePrivate::parseGetMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
