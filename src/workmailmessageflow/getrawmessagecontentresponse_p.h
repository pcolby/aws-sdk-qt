// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRAWMESSAGECONTENTRESPONSE_P_H
#define QTAWS_GETRAWMESSAGECONTENTRESPONSE_P_H

#include "workmailmessageflowresponse_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class GetRawMessageContentResponse;

class GetRawMessageContentResponsePrivate : public WorkMailMessageFlowResponsePrivate {

public:

    explicit GetRawMessageContentResponsePrivate(GetRawMessageContentResponse * const q);

    void parseGetRawMessageContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRawMessageContentResponse)
    Q_DISABLE_COPY(GetRawMessageContentResponsePrivate)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
