// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONREQUEST_H
#define QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetRepositoryScanningConfigurationRequestPrivate;

class QTAWSECR_EXPORT BatchGetRepositoryScanningConfigurationRequest : public EcrRequest {

public:
    BatchGetRepositoryScanningConfigurationRequest(const BatchGetRepositoryScanningConfigurationRequest &other);
    BatchGetRepositoryScanningConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRepositoryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
