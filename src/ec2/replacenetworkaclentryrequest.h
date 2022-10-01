// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLENTRYREQUEST_H
#define QTAWS_REPLACENETWORKACLENTRYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclEntryRequestPrivate;

class QTAWSEC2_EXPORT ReplaceNetworkAclEntryRequest : public Ec2Request {

public:
    ReplaceNetworkAclEntryRequest(const ReplaceNetworkAclEntryRequest &other);
    ReplaceNetworkAclEntryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceNetworkAclEntryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
