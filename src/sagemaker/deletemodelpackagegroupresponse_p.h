// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPRESPONSE_P_H
#define QTAWS_DELETEMODELPACKAGEGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupResponse;

class DeleteModelPackageGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelPackageGroupResponsePrivate(DeleteModelPackageGroupResponse * const q);

    void parseDeleteModelPackageGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageGroupResponse)
    Q_DISABLE_COPY(DeleteModelPackageGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
