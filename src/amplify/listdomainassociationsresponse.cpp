// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainassociationsresponse.h"
#include "listdomainassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListDomainAssociationsResponse
 * \brief The ListDomainAssociationsResponse class provides an interace for Amplify ListDomainAssociations responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listDomainAssociations
 */

/*!
 * Constructs a ListDomainAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainAssociationsResponse::ListDomainAssociationsResponse(
        const ListDomainAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListDomainAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListDomainAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainAssociationsRequest * ListDomainAssociationsResponse::request() const
{
    Q_D(const ListDomainAssociationsResponse);
    return static_cast<const ListDomainAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListDomainAssociations \a response.
 */
void ListDomainAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListDomainAssociationsResponsePrivate
 * \brief The ListDomainAssociationsResponsePrivate class provides private implementation for ListDomainAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListDomainAssociationsResponsePrivate object with public implementation \a q.
 */
ListDomainAssociationsResponsePrivate::ListDomainAssociationsResponsePrivate(
    ListDomainAssociationsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListDomainAssociations response element from \a xml.
 */
void ListDomainAssociationsResponsePrivate::parseListDomainAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
