// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEREQUEST_H
#define QTAWS_DEREGISTERINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeregisterInstanceRequest : public OpsWorksRequest {

public:
    DeregisterInstanceRequest(const DeregisterInstanceRequest &other);
    DeregisterInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
