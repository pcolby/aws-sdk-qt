// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRDSDBINSTANCEREQUEST_H
#define QTAWS_DEREGISTERRDSDBINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterRdsDbInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeregisterRdsDbInstanceRequest : public OpsWorksRequest {

public:
    DeregisterRdsDbInstanceRequest(const DeregisterRdsDbInstanceRequest &other);
    DeregisterRdsDbInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
