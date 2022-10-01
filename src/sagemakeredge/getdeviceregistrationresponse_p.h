// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREGISTRATIONRESPONSE_P_H
#define QTAWS_GETDEVICEREGISTRATIONRESPONSE_P_H

#include "sagemakeredgeresponse_p.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeviceRegistrationResponse;

class GetDeviceRegistrationResponsePrivate : public SagemakerEdgeResponsePrivate {

public:

    explicit GetDeviceRegistrationResponsePrivate(GetDeviceRegistrationResponse * const q);

    void parseGetDeviceRegistrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceRegistrationResponse)
    Q_DISABLE_COPY(GetDeviceRegistrationResponsePrivate)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
