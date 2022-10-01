// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERECSCLUSTERREQUEST_H
#define QTAWS_REGISTERECSCLUSTERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterEcsClusterRequestPrivate;

class QTAWSOPSWORKS_EXPORT RegisterEcsClusterRequest : public OpsWorksRequest {

public:
    RegisterEcsClusterRequest(const RegisterEcsClusterRequest &other);
    RegisterEcsClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterEcsClusterRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
