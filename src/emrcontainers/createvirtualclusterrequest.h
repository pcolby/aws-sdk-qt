// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALCLUSTERREQUEST_H
#define QTAWS_CREATEVIRTUALCLUSTERREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CreateVirtualClusterRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT CreateVirtualClusterRequest : public EmrcontainersRequest {

public:
    CreateVirtualClusterRequest(const CreateVirtualClusterRequest &other);
    CreateVirtualClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualClusterRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
