// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSPOLICYRESPONSE_P_H
#define QTAWS_UPDATEACCESSPOLICYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAccessPolicyResponse;

class UpdateAccessPolicyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit UpdateAccessPolicyResponsePrivate(UpdateAccessPolicyResponse * const q);

    void parseUpdateAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccessPolicyResponse)
    Q_DISABLE_COPY(UpdateAccessPolicyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
