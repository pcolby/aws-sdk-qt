// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEELASTICIPREQUEST_H
#define QTAWS_DISASSOCIATEELASTICIPREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DisassociateElasticIpRequestPrivate;

class QTAWSOPSWORKS_EXPORT DisassociateElasticIpRequest : public OpsWorksRequest {

public:
    DisassociateElasticIpRequest(const DisassociateElasticIpRequest &other);
    DisassociateElasticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
