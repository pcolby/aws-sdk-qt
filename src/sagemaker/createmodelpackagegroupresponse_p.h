// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEGROUPRESPONSE_P_H
#define QTAWS_CREATEMODELPACKAGEGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageGroupResponse;

class CreateModelPackageGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelPackageGroupResponsePrivate(CreateModelPackageGroupResponse * const q);

    void parseCreateModelPackageGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelPackageGroupResponse)
    Q_DISABLE_COPY(CreateModelPackageGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
