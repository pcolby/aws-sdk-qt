// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSETQUEUEATTRIBUTESRESPONSE_P_H
#define SQSSETQUEUEATTRIBUTESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSetQueueAttributesResponse;

class SqsSetQueueAttributesResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsSetQueueAttributesResponsePrivate(SqsSetQueueAttributesResponse * const q);

    void parseSetQueueAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsSetQueueAttributesResponse)
    Q_DISABLE_COPY(SqsSetQueueAttributesResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
