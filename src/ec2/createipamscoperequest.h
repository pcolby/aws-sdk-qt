// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMSCOPEREQUEST_H
#define QTAWS_CREATEIPAMSCOPEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamScopeRequestPrivate;

class QTAWSEC2_EXPORT CreateIpamScopeRequest : public Ec2Request {

public:
    CreateIpamScopeRequest(const CreateIpamScopeRequest &other);
    CreateIpamScopeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
