// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualmfadevicesresponse.h"
#include "listvirtualmfadevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListVirtualMFADevicesResponse
 * \brief The ListVirtualMFADevicesResponse class provides an interace for Iam ListVirtualMFADevices responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listVirtualMFADevices
 */

/*!
 * Constructs a ListVirtualMFADevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVirtualMFADevicesResponse::ListVirtualMFADevicesResponse(
        const ListVirtualMFADevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListVirtualMFADevicesResponsePrivate(this), parent)
{
    setRequest(new ListVirtualMFADevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVirtualMFADevicesRequest * ListVirtualMFADevicesResponse::request() const
{
    Q_D(const ListVirtualMFADevicesResponse);
    return static_cast<const ListVirtualMFADevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListVirtualMFADevices \a response.
 */
void ListVirtualMFADevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVirtualMFADevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListVirtualMFADevicesResponsePrivate
 * \brief The ListVirtualMFADevicesResponsePrivate class provides private implementation for ListVirtualMFADevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListVirtualMFADevicesResponsePrivate object with public implementation \a q.
 */
ListVirtualMFADevicesResponsePrivate::ListVirtualMFADevicesResponsePrivate(
    ListVirtualMFADevicesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListVirtualMFADevices response element from \a xml.
 */
void ListVirtualMFADevicesResponsePrivate::parseListVirtualMFADevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVirtualMFADevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
