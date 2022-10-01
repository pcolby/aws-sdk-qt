// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREGISTRATIONRESPONSE_H
#define QTAWS_GETDEVICEREGISTRATIONRESPONSE_H

#include "sagemakeredgeresponse.h"
#include "getdeviceregistrationrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeviceRegistrationResponsePrivate;

class QTAWSSAGEMAKEREDGE_EXPORT GetDeviceRegistrationResponse : public SagemakerEdgeResponse {
    Q_OBJECT

public:
    GetDeviceRegistrationResponse(const GetDeviceRegistrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceRegistrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceRegistrationResponse)
    Q_DISABLE_COPY(GetDeviceRegistrationResponse)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
