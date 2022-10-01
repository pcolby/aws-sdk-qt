// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETQUEUEATTRIBUTESRESPONSE_P_H
#define QTAWS_SETQUEUEATTRIBUTESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class SetQueueAttributesResponse;

class SetQueueAttributesResponsePrivate : public SqsResponsePrivate {

public:

    explicit SetQueueAttributesResponsePrivate(SetQueueAttributesResponse * const q);

    void parseSetQueueAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetQueueAttributesResponse)
    Q_DISABLE_COPY(SetQueueAttributesResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
