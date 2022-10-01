// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGERESPONSE_P_H
#define SQSDELETEMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageResponse;

class SqsDeleteMessageResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsDeleteMessageResponsePrivate(SqsDeleteMessageResponse * const q);

    void parseDeleteMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsDeleteMessageResponse)
    Q_DISABLE_COPY(SqsDeleteMessageResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
