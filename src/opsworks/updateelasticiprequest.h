// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICIPREQUEST_H
#define QTAWS_UPDATEELASTICIPREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateElasticIpRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateElasticIpRequest : public OpsWorksRequest {

public:
    UpdateElasticIpRequest(const UpdateElasticIpRequest &other);
    UpdateElasticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
