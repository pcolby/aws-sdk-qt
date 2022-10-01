// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceregistrationresponse.h"
#include "getdeviceregistrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::GetDeviceRegistrationResponse
 * \brief The GetDeviceRegistrationResponse class provides an interace for SagemakerEdge GetDeviceRegistration responses.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeClient::getDeviceRegistration
 */

/*!
 * Constructs a GetDeviceRegistrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceRegistrationResponse::GetDeviceRegistrationResponse(
        const GetDeviceRegistrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SagemakerEdgeResponse(new GetDeviceRegistrationResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRegistrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRegistrationRequest * GetDeviceRegistrationResponse::request() const
{
    Q_D(const GetDeviceRegistrationResponse);
    return static_cast<const GetDeviceRegistrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SagemakerEdge GetDeviceRegistration \a response.
 */
void GetDeviceRegistrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceRegistrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SagemakerEdge::GetDeviceRegistrationResponsePrivate
 * \brief The GetDeviceRegistrationResponsePrivate class provides private implementation for GetDeviceRegistrationResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a GetDeviceRegistrationResponsePrivate object with public implementation \a q.
 */
GetDeviceRegistrationResponsePrivate::GetDeviceRegistrationResponsePrivate(
    GetDeviceRegistrationResponse * const q) : SagemakerEdgeResponsePrivate(q)
{

}

/*!
 * Parses a SagemakerEdge GetDeviceRegistration response element from \a xml.
 */
void GetDeviceRegistrationResponsePrivate::parseGetDeviceRegistrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceRegistrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SagemakerEdge
} // namespace QtAws
