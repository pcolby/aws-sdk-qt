// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELPOLICYRESPONSE_P_H
#define QTAWS_PUTCHANNELPOLICYRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class PutChannelPolicyResponse;

class PutChannelPolicyResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit PutChannelPolicyResponsePrivate(PutChannelPolicyResponse * const q);

    void parsePutChannelPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutChannelPolicyResponse)
    Q_DISABLE_COPY(PutChannelPolicyResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
