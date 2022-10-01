// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGERESPONSE_P_H
#define QTAWS_CREATEMODELPACKAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageResponse;

class CreateModelPackageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelPackageResponsePrivate(CreateModelPackageResponse * const q);

    void parseCreateModelPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelPackageResponse)
    Q_DISABLE_COPY(CreateModelPackageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
