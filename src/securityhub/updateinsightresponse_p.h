// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSIGHTRESPONSE_P_H
#define QTAWS_UPDATEINSIGHTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateInsightResponse;

class UpdateInsightResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateInsightResponsePrivate(UpdateInsightResponse * const q);

    void parseUpdateInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInsightResponse)
    Q_DISABLE_COPY(UpdateInsightResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
