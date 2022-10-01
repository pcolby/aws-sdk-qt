// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERELASTICIPREQUEST_H
#define QTAWS_REGISTERELASTICIPREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterElasticIpRequestPrivate;

class QTAWSOPSWORKS_EXPORT RegisterElasticIpRequest : public OpsWorksRequest {

public:
    RegisterElasticIpRequest(const RegisterElasticIpRequest &other);
    RegisterElasticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
