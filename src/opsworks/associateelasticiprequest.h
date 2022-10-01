// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEELASTICIPREQUEST_H
#define QTAWS_ASSOCIATEELASTICIPREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class AssociateElasticIpRequestPrivate;

class QTAWSOPSWORKS_EXPORT AssociateElasticIpRequest : public OpsWorksRequest {

public:
    AssociateElasticIpRequest(const AssociateElasticIpRequest &other);
    AssociateElasticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
