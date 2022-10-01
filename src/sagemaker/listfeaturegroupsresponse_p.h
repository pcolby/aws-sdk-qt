// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATUREGROUPSRESPONSE_P_H
#define QTAWS_LISTFEATUREGROUPSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListFeatureGroupsResponse;

class ListFeatureGroupsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListFeatureGroupsResponsePrivate(ListFeatureGroupsResponse * const q);

    void parseListFeatureGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFeatureGroupsResponse)
    Q_DISABLE_COPY(ListFeatureGroupsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
