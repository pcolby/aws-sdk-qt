// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGESRESPONSE_P_H
#define QTAWS_LISTMODELPACKAGESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackagesResponse;

class ListModelPackagesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelPackagesResponsePrivate(ListModelPackagesResponse * const q);

    void parseListModelPackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelPackagesResponse)
    Q_DISABLE_COPY(ListModelPackagesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
