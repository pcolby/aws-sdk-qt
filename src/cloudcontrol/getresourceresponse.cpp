// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceresponse.h"
#include "getresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::GetResourceResponse
 * \brief The GetResourceResponse class provides an interace for CloudControl GetResource responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::getResource
 */

/*!
 * Constructs a GetResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceResponse::GetResourceResponse(
        const GetResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new GetResourceResponsePrivate(this), parent)
{
    setRequest(new GetResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceRequest * GetResourceResponse::request() const
{
    Q_D(const GetResourceResponse);
    return static_cast<const GetResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl GetResource \a response.
 */
void GetResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::GetResourceResponsePrivate
 * \brief The GetResourceResponsePrivate class provides private implementation for GetResourceResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a GetResourceResponsePrivate object with public implementation \a q.
 */
GetResourceResponsePrivate::GetResourceResponsePrivate(
    GetResourceResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl GetResource response element from \a xml.
 */
void GetResourceResponsePrivate::parseGetResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
