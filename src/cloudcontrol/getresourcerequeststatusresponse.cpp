// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcerequeststatusresponse.h"
#include "getresourcerequeststatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::GetResourceRequestStatusResponse
 * \brief The GetResourceRequestStatusResponse class provides an interace for CloudControl GetResourceRequestStatus responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::getResourceRequestStatus
 */

/*!
 * Constructs a GetResourceRequestStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceRequestStatusResponse::GetResourceRequestStatusResponse(
        const GetResourceRequestStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new GetResourceRequestStatusResponsePrivate(this), parent)
{
    setRequest(new GetResourceRequestStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceRequestStatusRequest * GetResourceRequestStatusResponse::request() const
{
    Q_D(const GetResourceRequestStatusResponse);
    return static_cast<const GetResourceRequestStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl GetResourceRequestStatus \a response.
 */
void GetResourceRequestStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceRequestStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::GetResourceRequestStatusResponsePrivate
 * \brief The GetResourceRequestStatusResponsePrivate class provides private implementation for GetResourceRequestStatusResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a GetResourceRequestStatusResponsePrivate object with public implementation \a q.
 */
GetResourceRequestStatusResponsePrivate::GetResourceRequestStatusResponsePrivate(
    GetResourceRequestStatusResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl GetResourceRequestStatus response element from \a xml.
 */
void GetResourceRequestStatusResponsePrivate::parseGetResourceRequestStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceRequestStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
