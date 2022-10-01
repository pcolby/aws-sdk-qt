// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSCONTROLEFFECTRESPONSE_P_H
#define QTAWS_GETACCESSCONTROLEFFECTRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetAccessControlEffectResponse;

class GetAccessControlEffectResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetAccessControlEffectResponsePrivate(GetAccessControlEffectResponse * const q);

    void parseGetAccessControlEffectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessControlEffectResponse)
    Q_DISABLE_COPY(GetAccessControlEffectResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
