// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONREQUEST_P_H
#define QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONREQUEST_P_H

#include "ecrrequest_p.h"
#include "batchgetrepositoryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetRepositoryScanningConfigurationRequest;

class BatchGetRepositoryScanningConfigurationRequestPrivate : public EcrRequestPrivate {

public:
    BatchGetRepositoryScanningConfigurationRequestPrivate(const EcrRequest::Action action,
                                   BatchGetRepositoryScanningConfigurationRequest * const q);
    BatchGetRepositoryScanningConfigurationRequestPrivate(const BatchGetRepositoryScanningConfigurationRequestPrivate &other,
                                   BatchGetRepositoryScanningConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetRepositoryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
