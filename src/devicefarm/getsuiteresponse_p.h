// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERESPONSE_P_H
#define QTAWS_GETSUITERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetSuiteResponse;

class GetSuiteResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetSuiteResponsePrivate(GetSuiteResponse * const q);

    void parseGetSuiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSuiteResponse)
    Q_DISABLE_COPY(GetSuiteResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
