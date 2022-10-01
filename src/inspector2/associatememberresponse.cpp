// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatememberresponse.h"
#include "associatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::AssociateMemberResponse
 * \brief The AssociateMemberResponse class provides an interace for Inspector2 AssociateMember responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::associateMember
 */

/*!
 * Constructs a AssociateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateMemberResponse::AssociateMemberResponse(
        const AssociateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new AssociateMemberResponsePrivate(this), parent)
{
    setRequest(new AssociateMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateMemberRequest * AssociateMemberResponse::request() const
{
    Q_D(const AssociateMemberResponse);
    return static_cast<const AssociateMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 AssociateMember \a response.
 */
void AssociateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::AssociateMemberResponsePrivate
 * \brief The AssociateMemberResponsePrivate class provides private implementation for AssociateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a AssociateMemberResponsePrivate object with public implementation \a q.
 */
AssociateMemberResponsePrivate::AssociateMemberResponsePrivate(
    AssociateMemberResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 AssociateMember response element from \a xml.
 */
void AssociateMemberResponsePrivate::parseAssociateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
