// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELPOLICYRESPONSE_P_H
#define QTAWS_GETCHANNELPOLICYRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelPolicyResponse;

class GetChannelPolicyResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit GetChannelPolicyResponsePrivate(GetChannelPolicyResponse * const q);

    void parseGetChannelPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelPolicyResponse)
    Q_DISABLE_COPY(GetChannelPolicyResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
