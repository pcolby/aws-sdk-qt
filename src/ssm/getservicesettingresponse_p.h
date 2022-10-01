// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGRESPONSE_P_H
#define QTAWS_GETSERVICESETTINGRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetServiceSettingResponse;

class GetServiceSettingResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetServiceSettingResponsePrivate(GetServiceSettingResponse * const q);

    void parseGetServiceSettingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceSettingResponse)
    Q_DISABLE_COPY(GetServiceSettingResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
