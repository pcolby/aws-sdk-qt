// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDURLRESPONSE_P_H
#define QTAWS_CREATETESTGRIDURLRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridUrlResponse;

class CreateTestGridUrlResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateTestGridUrlResponsePrivate(CreateTestGridUrlResponse * const q);

    void parseCreateTestGridUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTestGridUrlResponse)
    Q_DISABLE_COPY(CreateTestGridUrlResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
