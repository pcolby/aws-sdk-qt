// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUESTSTATUSRESPONSE_P_H
#define QTAWS_GETRESOURCEREQUESTSTATUSRESPONSE_P_H

#include "cloudcontrolresponse_p.h"

namespace QtAws {
namespace CloudControl {

class GetResourceRequestStatusResponse;

class GetResourceRequestStatusResponsePrivate : public CloudControlResponsePrivate {

public:

    explicit GetResourceRequestStatusResponsePrivate(GetResourceRequestStatusResponse * const q);

    void parseGetResourceRequestStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceRequestStatusResponse)
    Q_DISABLE_COPY(GetResourceRequestStatusResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
