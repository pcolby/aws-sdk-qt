// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMMANDRESPONSE_P_H
#define QTAWS_CANCELCOMMANDRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CancelCommandResponse;

class CancelCommandResponsePrivate : public SsmResponsePrivate {

public:

    explicit CancelCommandResponsePrivate(CancelCommandResponse * const q);

    void parseCancelCommandResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelCommandResponse)
    Q_DISABLE_COPY(CancelCommandResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
