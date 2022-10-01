// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiomemberresponse.h"
#include "getstudiomemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioMemberResponse
 * \brief The GetStudioMemberResponse class provides an interace for Nimble GetStudioMember responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::getStudioMember
 */

/*!
 * Constructs a GetStudioMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioMemberResponse::GetStudioMemberResponse(
        const GetStudioMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStudioMemberResponsePrivate(this), parent)
{
    setRequest(new GetStudioMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioMemberRequest * GetStudioMemberResponse::request() const
{
    Q_D(const GetStudioMemberResponse);
    return static_cast<const GetStudioMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStudioMember \a response.
 */
void GetStudioMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStudioMemberResponsePrivate
 * \brief The GetStudioMemberResponsePrivate class provides private implementation for GetStudioMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioMemberResponsePrivate object with public implementation \a q.
 */
GetStudioMemberResponsePrivate::GetStudioMemberResponsePrivate(
    GetStudioMemberResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStudioMember response element from \a xml.
 */
void GetStudioMemberResponsePrivate::parseGetStudioMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
