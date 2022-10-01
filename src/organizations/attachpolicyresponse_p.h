// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYRESPONSE_P_H
#define QTAWS_ATTACHPOLICYRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class AttachPolicyResponse;

class AttachPolicyResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit AttachPolicyResponsePrivate(AttachPolicyResponse * const q);

    void parseAttachPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
