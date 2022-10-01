// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcetypesresponse.h"
#include "listresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListResourceTypesResponse
 * \brief The ListResourceTypesResponse class provides an interace for Ram ListResourceTypes responses.
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
 * \sa RamClient::listResourceTypes
 */

/*!
 * Constructs a ListResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceTypesResponse::ListResourceTypesResponse(
        const ListResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new ListResourceTypesResponsePrivate(this), parent)
{
    setRequest(new ListResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceTypesRequest * ListResourceTypesResponse::request() const
{
    Q_D(const ListResourceTypesResponse);
    return static_cast<const ListResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram ListResourceTypes \a response.
 */
void ListResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::ListResourceTypesResponsePrivate
 * \brief The ListResourceTypesResponsePrivate class provides private implementation for ListResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListResourceTypesResponsePrivate object with public implementation \a q.
 */
ListResourceTypesResponsePrivate::ListResourceTypesResponsePrivate(
    ListResourceTypesResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram ListResourceTypes response element from \a xml.
 */
void ListResourceTypesResponsePrivate::parseListResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
