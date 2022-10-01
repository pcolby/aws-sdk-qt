// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H
#define SQSCHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityBatchResponse;

class SqsChangeMessageVisibilityBatchResponsePrivate : public SqsResponsePrivate {

public:
    SqsChangeMessageVisibilityBatchResponsePrivate(SqsChangeMessageVisibilityBatchResponse * const q);

    void parseChangeMessageVisibilityBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsChangeMessageVisibilityBatchResponse)
    Q_DISABLE_COPY(SqsChangeMessageVisibilityBatchResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
