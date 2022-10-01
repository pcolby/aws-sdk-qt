// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGERESPONSE_P_H
#define QTAWS_DELETEMODELPACKAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageResponse;

class DeleteModelPackageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelPackageResponsePrivate(DeleteModelPackageResponse * const q);

    void parseDeleteModelPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageResponse)
    Q_DISABLE_COPY(DeleteModelPackageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
