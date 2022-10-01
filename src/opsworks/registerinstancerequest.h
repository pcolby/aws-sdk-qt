// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEREQUEST_H
#define QTAWS_REGISTERINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT RegisterInstanceRequest : public OpsWorksRequest {

public:
    RegisterInstanceRequest(const RegisterInstanceRequest &other);
    RegisterInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
