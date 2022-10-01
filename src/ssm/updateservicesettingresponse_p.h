// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGRESPONSE_P_H
#define QTAWS_UPDATESERVICESETTINGRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateServiceSettingResponse;

class UpdateServiceSettingResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateServiceSettingResponsePrivate(UpdateServiceSettingResponse * const q);

    void parseUpdateServiceSettingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSettingResponse)
    Q_DISABLE_COPY(UpdateServiceSettingResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
