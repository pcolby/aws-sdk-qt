// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOLICYRESPONSE_P_H
#define QTAWS_DELETEACCESSPOLICYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAccessPolicyResponse;

class DeleteAccessPolicyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DeleteAccessPolicyResponsePrivate(DeleteAccessPolicyResponse * const q);

    void parseDeleteAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteAccessPolicyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
