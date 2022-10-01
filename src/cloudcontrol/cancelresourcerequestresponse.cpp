// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelresourcerequestresponse.h"
#include "cancelresourcerequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CancelResourceRequestResponse
 * \brief The CancelResourceRequestResponse class provides an interace for CloudControl CancelResourceRequest responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::cancelResourceRequest
 */

/*!
 * Constructs a CancelResourceRequestResponse object for \a reply to \a request, with parent \a parent.
 */
CancelResourceRequestResponse::CancelResourceRequestResponse(
        const CancelResourceRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new CancelResourceRequestResponsePrivate(this), parent)
{
    setRequest(new CancelResourceRequestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelResourceRequestRequest * CancelResourceRequestResponse::request() const
{
    Q_D(const CancelResourceRequestResponse);
    return static_cast<const CancelResourceRequestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl CancelResourceRequest \a response.
 */
void CancelResourceRequestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelResourceRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::CancelResourceRequestResponsePrivate
 * \brief The CancelResourceRequestResponsePrivate class provides private implementation for CancelResourceRequestResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CancelResourceRequestResponsePrivate object with public implementation \a q.
 */
CancelResourceRequestResponsePrivate::CancelResourceRequestResponsePrivate(
    CancelResourceRequestResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl CancelResourceRequest response element from \a xml.
 */
void CancelResourceRequestResponsePrivate::parseCancelResourceRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelResourceRequestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
