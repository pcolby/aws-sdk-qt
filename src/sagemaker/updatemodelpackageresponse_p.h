// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELPACKAGERESPONSE_P_H
#define QTAWS_UPDATEMODELPACKAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateModelPackageResponse;

class UpdateModelPackageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateModelPackageResponsePrivate(UpdateModelPackageResponse * const q);

    void parseUpdateModelPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateModelPackageResponse)
    Q_DISABLE_COPY(UpdateModelPackageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
