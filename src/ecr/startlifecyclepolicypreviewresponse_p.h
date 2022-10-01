// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLIFECYCLEPOLICYPREVIEWRESPONSE_P_H
#define QTAWS_STARTLIFECYCLEPOLICYPREVIEWRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class StartLifecyclePolicyPreviewResponse;

class StartLifecyclePolicyPreviewResponsePrivate : public EcrResponsePrivate {

public:

    explicit StartLifecyclePolicyPreviewResponsePrivate(StartLifecyclePolicyPreviewResponse * const q);

    void parseStartLifecyclePolicyPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartLifecyclePolicyPreviewResponse)
    Q_DISABLE_COPY(StartLifecyclePolicyPreviewResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
