// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEATTRIBUTESRESPONSE_P_H
#define SQSGETQUEUEATTRIBUTESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueAttributesResponse;

class SqsGetQueueAttributesResponsePrivate : public SqsResponsePrivate {

public:
    SqsGetQueueAttributesResponsePrivate(SqsGetQueueAttributesResponse * const q);

    void parseGetQueueAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsGetQueueAttributesResponse)
    Q_DISABLE_COPY(SqsGetQueueAttributesResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
