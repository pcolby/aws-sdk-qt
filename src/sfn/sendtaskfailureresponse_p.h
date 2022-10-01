// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKFAILURERESPONSE_P_H
#define QTAWS_SENDTASKFAILURERESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class SendTaskFailureResponse;

class SendTaskFailureResponsePrivate : public SfnResponsePrivate {

public:

    explicit SendTaskFailureResponsePrivate(SendTaskFailureResponse * const q);

    void parseSendTaskFailureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTaskFailureResponse)
    Q_DISABLE_COPY(SendTaskFailureResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
