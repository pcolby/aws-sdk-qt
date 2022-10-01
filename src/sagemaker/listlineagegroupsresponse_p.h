// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLINEAGEGROUPSRESPONSE_P_H
#define QTAWS_LISTLINEAGEGROUPSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListLineageGroupsResponse;

class ListLineageGroupsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListLineageGroupsResponsePrivate(ListLineageGroupsResponse * const q);

    void parseListLineageGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLineageGroupsResponse)
    Q_DISABLE_COPY(ListLineageGroupsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
