// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_P_H
#define QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_P_H

#include "dlmresponse_p.h"

namespace QtAws {
namespace Dlm {

class UpdateLifecyclePolicyResponse;

class UpdateLifecyclePolicyResponsePrivate : public DlmResponsePrivate {

public:

    explicit UpdateLifecyclePolicyResponsePrivate(UpdateLifecyclePolicyResponse * const q);

    void parseUpdateLifecyclePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLifecyclePolicyResponse)
    Q_DISABLE_COPY(UpdateLifecyclePolicyResponsePrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif
