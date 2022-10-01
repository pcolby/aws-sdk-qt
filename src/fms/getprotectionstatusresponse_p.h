// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTECTIONSTATUSRESPONSE_P_H
#define QTAWS_GETPROTECTIONSTATUSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetProtectionStatusResponse;

class GetProtectionStatusResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetProtectionStatusResponsePrivate(GetProtectionStatusResponse * const q);

    void parseGetProtectionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProtectionStatusResponse)
    Q_DISABLE_COPY(GetProtectionStatusResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
