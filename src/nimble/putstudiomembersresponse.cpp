// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstudiomembersresponse.h"
#include "putstudiomembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::PutStudioMembersResponse
 * \brief The PutStudioMembersResponse class provides an interace for Nimble PutStudioMembers responses.
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
 * \sa NimbleClient::putStudioMembers
 */

/*!
 * Constructs a PutStudioMembersResponse object for \a reply to \a request, with parent \a parent.
 */
PutStudioMembersResponse::PutStudioMembersResponse(
        const PutStudioMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new PutStudioMembersResponsePrivate(this), parent)
{
    setRequest(new PutStudioMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStudioMembersRequest * PutStudioMembersResponse::request() const
{
    Q_D(const PutStudioMembersResponse);
    return static_cast<const PutStudioMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble PutStudioMembers \a response.
 */
void PutStudioMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStudioMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::PutStudioMembersResponsePrivate
 * \brief The PutStudioMembersResponsePrivate class provides private implementation for PutStudioMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a PutStudioMembersResponsePrivate object with public implementation \a q.
 */
PutStudioMembersResponsePrivate::PutStudioMembersResponsePrivate(
    PutStudioMembersResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble PutStudioMembers response element from \a xml.
 */
void PutStudioMembersResponsePrivate::parsePutStudioMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStudioMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
