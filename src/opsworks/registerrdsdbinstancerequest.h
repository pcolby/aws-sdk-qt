// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRDSDBINSTANCEREQUEST_H
#define QTAWS_REGISTERRDSDBINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterRdsDbInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT RegisterRdsDbInstanceRequest : public OpsWorksRequest {

public:
    RegisterRdsDbInstanceRequest(const RegisterRdsDbInstanceRequest &other);
    RegisterRdsDbInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
