// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCLUSTERREQUEST_H
#define QTAWS_DEREGISTERCLUSTERREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DeregisterClusterRequestPrivate;

class QTAWSEKS_EXPORT DeregisterClusterRequest : public EksRequest {

public:
    DeregisterClusterRequest(const DeregisterClusterRequest &other);
    DeregisterClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterClusterRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
