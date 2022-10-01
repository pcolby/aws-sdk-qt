// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGEGROUPSRESPONSE_P_H
#define QTAWS_LISTMODELPACKAGEGROUPSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackageGroupsResponse;

class ListModelPackageGroupsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelPackageGroupsResponsePrivate(ListModelPackageGroupsResponse * const q);

    void parseListModelPackageGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelPackageGroupsResponse)
    Q_DISABLE_COPY(ListModelPackageGroupsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
