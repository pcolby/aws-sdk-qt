// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceroleforaccountresponse.h"
#include "getserviceroleforaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountResponse
 * \brief The GetServiceRoleForAccountResponse class provides an interace for Greengrass GetServiceRoleForAccount responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getServiceRoleForAccount
 */

/*!
 * Constructs a GetServiceRoleForAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceRoleForAccountResponse::GetServiceRoleForAccountResponse(
        const GetServiceRoleForAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetServiceRoleForAccountResponsePrivate(this), parent)
{
    setRequest(new GetServiceRoleForAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceRoleForAccountRequest * GetServiceRoleForAccountResponse::request() const
{
    Q_D(const GetServiceRoleForAccountResponse);
    return static_cast<const GetServiceRoleForAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetServiceRoleForAccount \a response.
 */
void GetServiceRoleForAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceRoleForAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountResponsePrivate
 * \brief The GetServiceRoleForAccountResponsePrivate class provides private implementation for GetServiceRoleForAccountResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetServiceRoleForAccountResponsePrivate object with public implementation \a q.
 */
GetServiceRoleForAccountResponsePrivate::GetServiceRoleForAccountResponsePrivate(
    GetServiceRoleForAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetServiceRoleForAccount response element from \a xml.
 */
void GetServiceRoleForAccountResponsePrivate::parseGetServiceRoleForAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceRoleForAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
