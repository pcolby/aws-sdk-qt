// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainassociationresponse.h"
#include "deletedomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationResponse
 * \brief The DeleteDomainAssociationResponse class provides an interace for Amplify DeleteDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteDomainAssociation
 */

/*!
 * Constructs a DeleteDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainAssociationResponse::DeleteDomainAssociationResponse(
        const DeleteDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainAssociationRequest * DeleteDomainAssociationResponse::request() const
{
    Q_D(const DeleteDomainAssociationResponse);
    return static_cast<const DeleteDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteDomainAssociation \a response.
 */
void DeleteDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationResponsePrivate
 * \brief The DeleteDomainAssociationResponsePrivate class provides private implementation for DeleteDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteDomainAssociationResponsePrivate object with public implementation \a q.
 */
DeleteDomainAssociationResponsePrivate::DeleteDomainAssociationResponsePrivate(
    DeleteDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteDomainAssociation response element from \a xml.
 */
void DeleteDomainAssociationResponsePrivate::parseDeleteDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
