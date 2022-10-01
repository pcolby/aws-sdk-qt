// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEUPDATEROLLBACKRESPONSE_P_H
#define QTAWS_CONTINUEUPDATEROLLBACKRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ContinueUpdateRollbackResponse;

class ContinueUpdateRollbackResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ContinueUpdateRollbackResponsePrivate(ContinueUpdateRollbackResponse * const q);

    void parseContinueUpdateRollbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ContinueUpdateRollbackResponse)
    Q_DISABLE_COPY(ContinueUpdateRollbackResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
