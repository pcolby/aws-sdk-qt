// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYPREVIEWRESPONSE_P_H
#define QTAWS_GETLIFECYCLEPOLICYPREVIEWRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetLifecyclePolicyPreviewResponse;

class GetLifecyclePolicyPreviewResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetLifecyclePolicyPreviewResponsePrivate(GetLifecyclePolicyPreviewResponse * const q);

    void parseGetLifecyclePolicyPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePolicyPreviewResponse)
    Q_DISABLE_COPY(GetLifecyclePolicyPreviewResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
