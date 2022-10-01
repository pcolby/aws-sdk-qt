// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESOURCEREQUESTRESPONSE_P_H
#define QTAWS_CANCELRESOURCEREQUESTRESPONSE_P_H

#include "cloudcontrolresponse_p.h"

namespace QtAws {
namespace CloudControl {

class CancelResourceRequestResponse;

class CancelResourceRequestResponsePrivate : public CloudControlResponsePrivate {

public:

    explicit CancelResourceRequestResponsePrivate(CancelResourceRequestResponse * const q);

    void parseCancelResourceRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelResourceRequestResponse)
    Q_DISABLE_COPY(CancelResourceRequestResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
