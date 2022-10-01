// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINEAGEGROUPPOLICYRESPONSE_P_H
#define QTAWS_GETLINEAGEGROUPPOLICYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class GetLineageGroupPolicyResponse;

class GetLineageGroupPolicyResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit GetLineageGroupPolicyResponsePrivate(GetLineageGroupPolicyResponse * const q);

    void parseGetLineageGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLineageGroupPolicyResponse)
    Q_DISABLE_COPY(GetLineageGroupPolicyResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
