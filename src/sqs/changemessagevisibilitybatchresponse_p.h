// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityBatchResponse;

class ChangeMessageVisibilityBatchResponsePrivate : public SqsResponsePrivate {

public:

    explicit ChangeMessageVisibilityBatchResponsePrivate(ChangeMessageVisibilityBatchResponse * const q);

    void parseChangeMessageVisibilityBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityBatchResponse)
    Q_DISABLE_COPY(ChangeMessageVisibilityBatchResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
