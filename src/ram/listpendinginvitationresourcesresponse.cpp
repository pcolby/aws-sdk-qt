// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpendinginvitationresourcesresponse.h"
#include "listpendinginvitationresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPendingInvitationResourcesResponse
 * \brief The ListPendingInvitationResourcesResponse class provides an interace for Ram ListPendingInvitationResources responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::listPendingInvitationResources
 */

/*!
 * Constructs a ListPendingInvitationResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPendingInvitationResourcesResponse::ListPendingInvitationResourcesResponse(
        const ListPendingInvitationResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new ListPendingInvitationResourcesResponsePrivate(this), parent)
{
    setRequest(new ListPendingInvitationResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPendingInvitationResourcesRequest * ListPendingInvitationResourcesResponse::request() const
{
    Q_D(const ListPendingInvitationResourcesResponse);
    return static_cast<const ListPendingInvitationResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram ListPendingInvitationResources \a response.
 */
void ListPendingInvitationResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPendingInvitationResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::ListPendingInvitationResourcesResponsePrivate
 * \brief The ListPendingInvitationResourcesResponsePrivate class provides private implementation for ListPendingInvitationResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPendingInvitationResourcesResponsePrivate object with public implementation \a q.
 */
ListPendingInvitationResourcesResponsePrivate::ListPendingInvitationResourcesResponsePrivate(
    ListPendingInvitationResourcesResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram ListPendingInvitationResources response element from \a xml.
 */
void ListPendingInvitationResourcesResponsePrivate::parseListPendingInvitationResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPendingInvitationResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
