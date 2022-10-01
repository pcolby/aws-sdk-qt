// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiomemberresponse.h"
#include "deletestudiomemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioMemberResponse
 * \brief The DeleteStudioMemberResponse class provides an interace for Nimble DeleteStudioMember responses.
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
 * \sa NimbleClient::deleteStudioMember
 */

/*!
 * Constructs a DeleteStudioMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioMemberResponse::DeleteStudioMemberResponse(
        const DeleteStudioMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteStudioMemberResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioMemberRequest * DeleteStudioMemberResponse::request() const
{
    Q_D(const DeleteStudioMemberResponse);
    return static_cast<const DeleteStudioMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteStudioMember \a response.
 */
void DeleteStudioMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteStudioMemberResponsePrivate
 * \brief The DeleteStudioMemberResponsePrivate class provides private implementation for DeleteStudioMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioMemberResponsePrivate object with public implementation \a q.
 */
DeleteStudioMemberResponsePrivate::DeleteStudioMemberResponsePrivate(
    DeleteStudioMemberResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteStudioMember response element from \a xml.
 */
void DeleteStudioMemberResponsePrivate::parseDeleteStudioMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
