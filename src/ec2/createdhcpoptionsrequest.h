// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDHCPOPTIONSREQUEST_H
#define QTAWS_CREATEDHCPOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateDhcpOptionsRequestPrivate;

class QTAWSEC2_EXPORT CreateDhcpOptionsRequest : public Ec2Request {

public:
    CreateDhcpOptionsRequest(const CreateDhcpOptionsRequest &other);
    CreateDhcpOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
