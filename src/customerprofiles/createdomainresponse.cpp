// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainresponse.h"
#include "createdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CreateDomainResponse
 * \brief The CreateDomainResponse class provides an interace for CustomerProfiles CreateDomain responses.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::createDomain
 */

/*!
 * Constructs a CreateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainResponse::CreateDomainResponse(
        const CreateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new CreateDomainResponsePrivate(this), parent)
{
    setRequest(new CreateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainRequest * CreateDomainResponse::request() const
{
    Q_D(const CreateDomainResponse);
    return static_cast<const CreateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles CreateDomain \a response.
 */
void CreateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::CreateDomainResponsePrivate
 * \brief The CreateDomainResponsePrivate class provides private implementation for CreateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CreateDomainResponsePrivate object with public implementation \a q.
 */
CreateDomainResponsePrivate::CreateDomainResponsePrivate(
    CreateDomainResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles CreateDomain response element from \a xml.
 */
void CreateDomainResponsePrivate::parseCreateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
