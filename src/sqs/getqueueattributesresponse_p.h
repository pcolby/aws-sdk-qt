// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEATTRIBUTESRESPONSE_P_H
#define QTAWS_GETQUEUEATTRIBUTESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class GetQueueAttributesResponse;

class GetQueueAttributesResponsePrivate : public SqsResponsePrivate {

public:

    explicit GetQueueAttributesResponsePrivate(GetQueueAttributesResponse * const q);

    void parseGetQueueAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueueAttributesResponse)
    Q_DISABLE_COPY(GetQueueAttributesResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
