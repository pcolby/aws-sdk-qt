// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBUNLOCKCODERESPONSE_P_H
#define QTAWS_GETJOBUNLOCKCODERESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class GetJobUnlockCodeResponse;

class GetJobUnlockCodeResponsePrivate : public SnowballResponsePrivate {

public:

    explicit GetJobUnlockCodeResponsePrivate(GetJobUnlockCodeResponse * const q);

    void parseGetJobUnlockCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobUnlockCodeResponse)
    Q_DISABLE_COPY(GetJobUnlockCodeResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
