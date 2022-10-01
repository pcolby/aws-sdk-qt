// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRESOURCECONFIGRESPONSE_P_H
#define QTAWS_BATCHGETRESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class BatchGetResourceConfigResponse;

class BatchGetResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit BatchGetResourceConfigResponsePrivate(BatchGetResourceConfigResponse * const q);

    void parseBatchGetResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetResourceConfigResponse)
    Q_DISABLE_COPY(BatchGetResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
