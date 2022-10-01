// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKSTACKRESPONSE_P_H
#define QTAWS_ROLLBACKSTACKRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class RollbackStackResponse;

class RollbackStackResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit RollbackStackResponsePrivate(RollbackStackResponse * const q);

    void parseRollbackStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RollbackStackResponse)
    Q_DISABLE_COPY(RollbackStackResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
