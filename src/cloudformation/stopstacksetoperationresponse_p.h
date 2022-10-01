// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKSETOPERATIONRESPONSE_P_H
#define QTAWS_STOPSTACKSETOPERATIONRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class StopStackSetOperationResponse;

class StopStackSetOperationResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit StopStackSetOperationResponsePrivate(StopStackSetOperationResponse * const q);

    void parseStopStackSetOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStackSetOperationResponse)
    Q_DISABLE_COPY(StopStackSetOperationResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
