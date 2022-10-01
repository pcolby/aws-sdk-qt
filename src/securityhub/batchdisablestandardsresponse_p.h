// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLESTANDARDSRESPONSE_P_H
#define QTAWS_BATCHDISABLESTANDARDSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class BatchDisableStandardsResponse;

class BatchDisableStandardsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit BatchDisableStandardsResponsePrivate(BatchDisableStandardsResponse * const q);

    void parseBatchDisableStandardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisableStandardsResponse)
    Q_DISABLE_COPY(BatchDisableStandardsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
