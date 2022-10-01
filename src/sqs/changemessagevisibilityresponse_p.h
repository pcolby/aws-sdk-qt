// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYRESPONSE_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityResponse;

class ChangeMessageVisibilityResponsePrivate : public SqsResponsePrivate {

public:

    explicit ChangeMessageVisibilityResponsePrivate(ChangeMessageVisibilityResponse * const q);

    void parseChangeMessageVisibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityResponse)
    Q_DISABLE_COPY(ChangeMessageVisibilityResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
