// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmemberresponse.h"
#include "getmemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetMemberResponse
 * \brief The GetMemberResponse class provides an interace for Inspector2 GetMember responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getMember
 */

/*!
 * Constructs a GetMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetMemberResponse::GetMemberResponse(
        const GetMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new GetMemberResponsePrivate(this), parent)
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
 * Parses a successful Inspector2 GetMember \a response.
 */
void GetMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::GetMemberResponsePrivate
 * \brief The GetMemberResponsePrivate class provides private implementation for GetMemberResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetMemberResponsePrivate object with public implementation \a q.
 */
GetMemberResponsePrivate::GetMemberResponsePrivate(
    GetMemberResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 GetMember response element from \a xml.
 */
void GetMemberResponsePrivate::parseGetMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
