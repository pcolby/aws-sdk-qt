// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatememberresponse.h"
#include "disassociatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisassociateMemberResponse
 * \brief The DisassociateMemberResponse class provides an interace for Inspector2 DisassociateMember responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disassociateMember
 */

/*!
 * Constructs a DisassociateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMemberResponse::DisassociateMemberResponse(
        const DisassociateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new DisassociateMemberResponsePrivate(this), parent)
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
 * Parses a successful Inspector2 DisassociateMember \a response.
 */
void DisassociateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::DisassociateMemberResponsePrivate
 * \brief The DisassociateMemberResponsePrivate class provides private implementation for DisassociateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisassociateMemberResponsePrivate object with public implementation \a q.
 */
DisassociateMemberResponsePrivate::DisassociateMemberResponsePrivate(
    DisassociateMemberResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 DisassociateMember response element from \a xml.
 */
void DisassociateMemberResponsePrivate::parseDisassociateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
