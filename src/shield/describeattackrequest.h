// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKREQUEST_H
#define QTAWS_DESCRIBEATTACKREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeAttackRequest : public ShieldRequest {

public:
    DescribeAttackRequest(const DescribeAttackRequest &other);
    DescribeAttackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttackRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
