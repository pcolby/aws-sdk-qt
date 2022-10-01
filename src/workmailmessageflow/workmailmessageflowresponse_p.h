// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWRESPONSE_P_H
#define QTAWS_WORKMAILMESSAGEFLOWRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowResponse;

class WorkMailMessageFlowResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkMailMessageFlowResponsePrivate(WorkMailMessageFlowResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkMailMessageFlowResponse)
    Q_DISABLE_COPY(WorkMailMessageFlowResponsePrivate)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
