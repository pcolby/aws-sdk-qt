// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDHCPOPTIONSREQUEST_H
#define QTAWS_ASSOCIATEDHCPOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateDhcpOptionsRequestPrivate;

class QTAWSEC2_EXPORT AssociateDhcpOptionsRequest : public Ec2Request {

public:
    AssociateDhcpOptionsRequest(const AssociateDhcpOptionsRequest &other);
    AssociateDhcpOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
