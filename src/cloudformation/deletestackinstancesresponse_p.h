// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKINSTANCESRESPONSE_P_H
#define QTAWS_DELETESTACKINSTANCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackInstancesResponse;

class DeleteStackInstancesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeleteStackInstancesResponsePrivate(DeleteStackInstancesResponse * const q);

    void parseDeleteStackInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStackInstancesResponse)
    Q_DISABLE_COPY(DeleteStackInstancesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
