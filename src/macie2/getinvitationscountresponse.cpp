// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinvitationscountresponse.h"
#include "getinvitationscountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetInvitationsCountResponse
 * \brief The GetInvitationsCountResponse class provides an interace for Macie2 GetInvitationsCount responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getInvitationsCount
 */

/*!
 * Constructs a GetInvitationsCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetInvitationsCountResponse::GetInvitationsCountResponse(
        const GetInvitationsCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetInvitationsCountResponsePrivate(this), parent)
{
    setRequest(new GetInvitationsCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInvitationsCountRequest * GetInvitationsCountResponse::request() const
{
    Q_D(const GetInvitationsCountResponse);
    return static_cast<const GetInvitationsCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetInvitationsCount \a response.
 */
void GetInvitationsCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInvitationsCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetInvitationsCountResponsePrivate
 * \brief The GetInvitationsCountResponsePrivate class provides private implementation for GetInvitationsCountResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetInvitationsCountResponsePrivate object with public implementation \a q.
 */
GetInvitationsCountResponsePrivate::GetInvitationsCountResponsePrivate(
    GetInvitationsCountResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetInvitationsCount response element from \a xml.
 */
void GetInvitationsCountResponsePrivate::parseGetInvitationsCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvitationsCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
