// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class BatchGetRepositoryScanningConfigurationResponse;

class BatchGetRepositoryScanningConfigurationResponsePrivate : public EcrResponsePrivate {

public:

    explicit BatchGetRepositoryScanningConfigurationResponsePrivate(BatchGetRepositoryScanningConfigurationResponse * const q);

    void parseBatchGetRepositoryScanningConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetRepositoryScanningConfigurationResponse)
    Q_DISABLE_COPY(BatchGetRepositoryScanningConfigurationResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
