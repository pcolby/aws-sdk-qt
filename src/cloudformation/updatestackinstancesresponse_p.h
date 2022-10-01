// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKINSTANCESRESPONSE_P_H
#define QTAWS_UPDATESTACKINSTANCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackInstancesResponse;

class UpdateStackInstancesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit UpdateStackInstancesResponsePrivate(UpdateStackInstancesResponse * const q);

    void parseUpdateStackInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStackInstancesResponse)
    Q_DISABLE_COPY(UpdateStackInstancesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
