// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEPOLICYRESPONSE_P_H
#define QTAWS_DELETELIFECYCLEPOLICYRESPONSE_P_H

#include "dlmresponse_p.h"

namespace QtAws {
namespace Dlm {

class DeleteLifecyclePolicyResponse;

class DeleteLifecyclePolicyResponsePrivate : public DlmResponsePrivate {

public:

    explicit DeleteLifecyclePolicyResponsePrivate(DeleteLifecyclePolicyResponse * const q);

    void parseDeleteLifecyclePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLifecyclePolicyResponse)
    Q_DISABLE_COPY(DeleteLifecyclePolicyResponsePrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif
