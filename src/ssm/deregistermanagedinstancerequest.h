// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMANAGEDINSTANCEREQUEST_H
#define QTAWS_DEREGISTERMANAGEDINSTANCEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterManagedInstanceRequestPrivate;

class QTAWSSSM_EXPORT DeregisterManagedInstanceRequest : public SsmRequest {

public:
    DeregisterManagedInstanceRequest(const DeregisterManagedInstanceRequest &other);
    DeregisterManagedInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterManagedInstanceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
