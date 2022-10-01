// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDHCPOPTIONSREQUEST_H
#define QTAWS_DELETEDHCPOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteDhcpOptionsRequestPrivate;

class QTAWSEC2_EXPORT DeleteDhcpOptionsRequest : public Ec2Request {

public:
    DeleteDhcpOptionsRequest(const DeleteDhcpOptionsRequest &other);
    DeleteDhcpOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
