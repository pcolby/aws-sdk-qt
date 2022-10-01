// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourceshareresponse.h"
#include "deleteresourceshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::DeleteResourceShareResponse
 * \brief The DeleteResourceShareResponse class provides an interace for Ram DeleteResourceShare responses.
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
 * \sa RamClient::deleteResourceShare
 */

/*!
 * Constructs a DeleteResourceShareResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceShareResponse::DeleteResourceShareResponse(
        const DeleteResourceShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new DeleteResourceShareResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceShareRequest * DeleteResourceShareResponse::request() const
{
    Q_D(const DeleteResourceShareResponse);
    return static_cast<const DeleteResourceShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram DeleteResourceShare \a response.
 */
void DeleteResourceShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::DeleteResourceShareResponsePrivate
 * \brief The DeleteResourceShareResponsePrivate class provides private implementation for DeleteResourceShareResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a DeleteResourceShareResponsePrivate object with public implementation \a q.
 */
DeleteResourceShareResponsePrivate::DeleteResourceShareResponsePrivate(
    DeleteResourceShareResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram DeleteResourceShare response element from \a xml.
 */
void DeleteResourceShareResponsePrivate::parseDeleteResourceShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
