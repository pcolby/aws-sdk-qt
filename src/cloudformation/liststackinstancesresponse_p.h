// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESRESPONSE_P_H
#define QTAWS_LISTSTACKINSTANCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStackInstancesResponse;

class ListStackInstancesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStackInstancesResponsePrivate(ListStackInstancesResponse * const q);

    void parseListStackInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackInstancesResponse)
    Q_DISABLE_COPY(ListStackInstancesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
