// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYRESPONSE_P_H
#define SQSCHANGEMESSAGEVISIBILITYRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityResponse;

class SqsChangeMessageVisibilityResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsChangeMessageVisibilityResponsePrivate(SqsChangeMessageVisibilityResponse * const q);

    void parseChangeMessageVisibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsChangeMessageVisibilityResponse)
    Q_DISABLE_COPY(SqsChangeMessageVisibilityResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
