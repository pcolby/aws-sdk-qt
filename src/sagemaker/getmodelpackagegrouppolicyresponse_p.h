// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELPACKAGEGROUPPOLICYRESPONSE_P_H
#define QTAWS_GETMODELPACKAGEGROUPPOLICYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class GetModelPackageGroupPolicyResponse;

class GetModelPackageGroupPolicyResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit GetModelPackageGroupPolicyResponsePrivate(GetModelPackageGroupPolicyResponse * const q);

    void parseGetModelPackageGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(GetModelPackageGroupPolicyResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
