// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainassociationresponse.h"
#include "getdomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetDomainAssociationResponse
 * \brief The GetDomainAssociationResponse class provides an interace for Amplify GetDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getDomainAssociation
 */

/*!
 * Constructs a GetDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainAssociationResponse::GetDomainAssociationResponse(
        const GetDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new GetDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainAssociationRequest * GetDomainAssociationResponse::request() const
{
    Q_D(const GetDomainAssociationResponse);
    return static_cast<const GetDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetDomainAssociation \a response.
 */
void GetDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetDomainAssociationResponsePrivate
 * \brief The GetDomainAssociationResponsePrivate class provides private implementation for GetDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetDomainAssociationResponsePrivate object with public implementation \a q.
 */
GetDomainAssociationResponsePrivate::GetDomainAssociationResponsePrivate(
    GetDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetDomainAssociation response element from \a xml.
 */
void GetDomainAssociationResponsePrivate::parseGetDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
