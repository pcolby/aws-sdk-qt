// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKSUCCESSRESPONSE_P_H
#define QTAWS_SENDTASKSUCCESSRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class SendTaskSuccessResponse;

class SendTaskSuccessResponsePrivate : public SfnResponsePrivate {

public:

    explicit SendTaskSuccessResponsePrivate(SendTaskSuccessResponse * const q);

    void parseSendTaskSuccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTaskSuccessResponse)
    Q_DISABLE_COPY(SendTaskSuccessResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
