// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYRESPONSE_P_H
#define QTAWS_LISTTARGETSFORPOLICYRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListTargetsForPolicyResponse;

class ListTargetsForPolicyResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListTargetsForPolicyResponsePrivate(ListTargetsForPolicyResponse * const q);

    void parseListTargetsForPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetsForPolicyResponse)
    Q_DISABLE_COPY(ListTargetsForPolicyResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
