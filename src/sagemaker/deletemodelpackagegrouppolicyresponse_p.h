// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPPOLICYRESPONSE_P_H
#define QTAWS_DELETEMODELPACKAGEGROUPPOLICYRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupPolicyResponse;

class DeleteModelPackageGroupPolicyResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelPackageGroupPolicyResponsePrivate(DeleteModelPackageGroupPolicyResponse * const q);

    void parseDeleteModelPackageGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(DeleteModelPackageGroupPolicyResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
