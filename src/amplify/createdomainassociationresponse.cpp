// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainassociationresponse.h"
#include "createdomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateDomainAssociationResponse
 * \brief The CreateDomainAssociationResponse class provides an interace for Amplify CreateDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createDomainAssociation
 */

/*!
 * Constructs a CreateDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainAssociationResponse::CreateDomainAssociationResponse(
        const CreateDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainAssociationRequest * CreateDomainAssociationResponse::request() const
{
    Q_D(const CreateDomainAssociationResponse);
    return static_cast<const CreateDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateDomainAssociation \a response.
 */
void CreateDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateDomainAssociationResponsePrivate
 * \brief The CreateDomainAssociationResponsePrivate class provides private implementation for CreateDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateDomainAssociationResponsePrivate object with public implementation \a q.
 */
CreateDomainAssociationResponsePrivate::CreateDomainAssociationResponsePrivate(
    CreateDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateDomainAssociation response element from \a xml.
 */
void CreateDomainAssociationResponsePrivate::parseCreateDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
