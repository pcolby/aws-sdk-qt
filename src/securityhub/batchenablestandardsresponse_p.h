// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLESTANDARDSRESPONSE_P_H
#define QTAWS_BATCHENABLESTANDARDSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class BatchEnableStandardsResponse;

class BatchEnableStandardsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit BatchEnableStandardsResponsePrivate(BatchEnableStandardsResponse * const q);

    void parseBatchEnableStandardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchEnableStandardsResponse)
    Q_DISABLE_COPY(BatchEnableStandardsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
