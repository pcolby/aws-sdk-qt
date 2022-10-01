// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILRESPONSE_P_H
#define QTAWS_GETCOMPLIANCEDETAILRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetComplianceDetailResponse;

class GetComplianceDetailResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetComplianceDetailResponsePrivate(GetComplianceDetailResponse * const q);

    void parseGetComplianceDetailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailResponse)
    Q_DISABLE_COPY(GetComplianceDetailResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
