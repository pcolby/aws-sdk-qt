// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESETTINGRESPONSE_P_H
#define QTAWS_RESETSERVICESETTINGRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ResetServiceSettingResponse;

class ResetServiceSettingResponsePrivate : public SsmResponsePrivate {

public:

    explicit ResetServiceSettingResponsePrivate(ResetServiceSettingResponse * const q);

    void parseResetServiceSettingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetServiceSettingResponse)
    Q_DISABLE_COPY(ResetServiceSettingResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
