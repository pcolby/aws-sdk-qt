// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICIESRESPONSE_P_H
#define QTAWS_GETLIFECYCLEPOLICIESRESPONSE_P_H

#include "dlmresponse_p.h"

namespace QtAws {
namespace Dlm {

class GetLifecyclePoliciesResponse;

class GetLifecyclePoliciesResponsePrivate : public DlmResponsePrivate {

public:

    explicit GetLifecyclePoliciesResponsePrivate(GetLifecyclePoliciesResponse * const q);

    void parseGetLifecyclePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePoliciesResponse)
    Q_DISABLE_COPY(GetLifecyclePoliciesResponsePrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif
