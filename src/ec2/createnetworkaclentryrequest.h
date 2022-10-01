// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLENTRYREQUEST_H
#define QTAWS_CREATENETWORKACLENTRYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclEntryRequestPrivate;

class QTAWSEC2_EXPORT CreateNetworkAclEntryRequest : public Ec2Request {

public:
    CreateNetworkAclEntryRequest(const CreateNetworkAclEntryRequest &other);
    CreateNetworkAclEntryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAclEntryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
