// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRAWMESSAGECONTENTRESPONSE_P_H
#define QTAWS_PUTRAWMESSAGECONTENTRESPONSE_P_H

#include "workmailmessageflowresponse_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class PutRawMessageContentResponse;

class PutRawMessageContentResponsePrivate : public WorkMailMessageFlowResponsePrivate {

public:

    explicit PutRawMessageContentResponsePrivate(PutRawMessageContentResponse * const q);

    void parsePutRawMessageContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRawMessageContentResponse)
    Q_DISABLE_COPY(PutRawMessageContentResponsePrivate)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
