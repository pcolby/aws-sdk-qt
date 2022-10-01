// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECHANGESETRESPONSE_P_H
#define QTAWS_EXECUTECHANGESETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ExecuteChangeSetResponse;

class ExecuteChangeSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ExecuteChangeSetResponsePrivate(ExecuteChangeSetResponse * const q);

    void parseExecuteChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteChangeSetResponse)
    Q_DISABLE_COPY(ExecuteChangeSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
