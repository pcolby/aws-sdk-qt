// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOLICYRESPONSE_P_H
#define QTAWS_CREATEACCESSPOLICYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAccessPolicyResponse;

class CreateAccessPolicyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateAccessPolicyResponsePrivate(CreateAccessPolicyResponse * const q);

    void parseCreateAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessPolicyResponse)
    Q_DISABLE_COPY(CreateAccessPolicyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
