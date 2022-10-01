// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPOLICIESRESPONSE_P_H
#define QTAWS_GETEFFECTIVEPOLICIESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetEffectivePoliciesResponse;

class GetEffectivePoliciesResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetEffectivePoliciesResponsePrivate(GetEffectivePoliciesResponse * const q);

    void parseGetEffectivePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEffectivePoliciesResponse)
    Q_DISABLE_COPY(GetEffectivePoliciesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
