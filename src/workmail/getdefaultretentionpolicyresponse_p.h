// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTRETENTIONPOLICYRESPONSE_P_H
#define QTAWS_GETDEFAULTRETENTIONPOLICYRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetDefaultRetentionPolicyResponse;

class GetDefaultRetentionPolicyResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetDefaultRetentionPolicyResponsePrivate(GetDefaultRetentionPolicyResponse * const q);

    void parseGetDefaultRetentionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDefaultRetentionPolicyResponse)
    Q_DISABLE_COPY(GetDefaultRetentionPolicyResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
