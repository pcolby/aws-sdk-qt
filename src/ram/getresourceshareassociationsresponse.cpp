// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceshareassociationsresponse.h"
#include "getresourceshareassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourceShareAssociationsResponse
 * \brief The GetResourceShareAssociationsResponse class provides an interace for Ram GetResourceShareAssociations responses.
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
 * \sa RamClient::getResourceShareAssociations
 */

/*!
 * Constructs a GetResourceShareAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceShareAssociationsResponse::GetResourceShareAssociationsResponse(
        const GetResourceShareAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new GetResourceShareAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetResourceShareAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceShareAssociationsRequest * GetResourceShareAssociationsResponse::request() const
{
    Q_D(const GetResourceShareAssociationsResponse);
    return static_cast<const GetResourceShareAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram GetResourceShareAssociations \a response.
 */
void GetResourceShareAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceShareAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::GetResourceShareAssociationsResponsePrivate
 * \brief The GetResourceShareAssociationsResponsePrivate class provides private implementation for GetResourceShareAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourceShareAssociationsResponsePrivate object with public implementation \a q.
 */
GetResourceShareAssociationsResponsePrivate::GetResourceShareAssociationsResponsePrivate(
    GetResourceShareAssociationsResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram GetResourceShareAssociations response element from \a xml.
 */
void GetResourceShareAssociationsResponsePrivate::parseGetResourceShareAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceShareAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
