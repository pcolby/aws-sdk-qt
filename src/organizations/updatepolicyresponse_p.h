// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOLICYRESPONSE_P_H
#define QTAWS_UPDATEPOLICYRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class UpdatePolicyResponse;

class UpdatePolicyResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit UpdatePolicyResponsePrivate(UpdatePolicyResponse * const q);

    void parseUpdatePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePolicyResponse)
    Q_DISABLE_COPY(UpdatePolicyResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
