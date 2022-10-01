// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSSUMMARYRESPONSE_P_H
#define QTAWS_GETOPSSUMMARYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetOpsSummaryResponse;

class GetOpsSummaryResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetOpsSummaryResponsePrivate(GetOpsSummaryResponse * const q);

    void parseGetOpsSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpsSummaryResponse)
    Q_DISABLE_COPY(GetOpsSummaryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
