// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERECSCLUSTERREQUEST_H
#define QTAWS_DEREGISTERECSCLUSTERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterEcsClusterRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeregisterEcsClusterRequest : public OpsWorksRequest {

public:
    DeregisterEcsClusterRequest(const DeregisterEcsClusterRequest &other);
    DeregisterEcsClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterEcsClusterRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
