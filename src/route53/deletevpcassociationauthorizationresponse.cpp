// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevpcassociationauthorizationresponse.h"
#include "deletevpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationResponse
 * \brief The DeleteVPCAssociationAuthorizationResponse class provides an interace for Route53 DeleteVPCAssociationAuthorization responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteVPCAssociationAuthorization
 */

/*!
 * Constructs a DeleteVPCAssociationAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVPCAssociationAuthorizationResponse::DeleteVPCAssociationAuthorizationResponse(
        const DeleteVPCAssociationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteVPCAssociationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteVPCAssociationAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVPCAssociationAuthorizationRequest * DeleteVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const DeleteVPCAssociationAuthorizationResponse);
    return static_cast<const DeleteVPCAssociationAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteVPCAssociationAuthorization \a response.
 */
void DeleteVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVPCAssociationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationResponsePrivate
 * \brief The DeleteVPCAssociationAuthorizationResponsePrivate class provides private implementation for DeleteVPCAssociationAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteVPCAssociationAuthorizationResponsePrivate object with public implementation \a q.
 */
DeleteVPCAssociationAuthorizationResponsePrivate::DeleteVPCAssociationAuthorizationResponsePrivate(
    DeleteVPCAssociationAuthorizationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteVPCAssociationAuthorization response element from \a xml.
 */
void DeleteVPCAssociationAuthorizationResponsePrivate::parseDeleteVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVPCAssociationAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
