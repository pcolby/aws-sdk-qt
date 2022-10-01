// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMODELPACKAGEGROUPPOLICYRESPONSE_P_H
#define QTAWS_PUTMODELPACKAGEGROUPPOLICYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class PutModelPackageGroupPolicyResponse;

class PutModelPackageGroupPolicyResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit PutModelPackageGroupPolicyResponsePrivate(PutModelPackageGroupPolicyResponse * const q);

    void parsePutModelPackageGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(PutModelPackageGroupPolicyResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
