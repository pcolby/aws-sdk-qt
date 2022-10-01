// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIFECYCLEPOLICYRESPONSE_P_H
#define QTAWS_CREATELIFECYCLEPOLICYRESPONSE_P_H

#include "dlmresponse_p.h"

namespace QtAws {
namespace Dlm {

class CreateLifecyclePolicyResponse;

class CreateLifecyclePolicyResponsePrivate : public DlmResponsePrivate {

public:

    explicit CreateLifecyclePolicyResponsePrivate(CreateLifecyclePolicyResponse * const q);

    void parseCreateLifecyclePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLifecyclePolicyResponse)
    Q_DISABLE_COPY(CreateLifecyclePolicyResponsePrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif
