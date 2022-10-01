// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTLOGBUCKETREQUEST_H
#define QTAWS_DISASSOCIATEDRTLOGBUCKETREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTLogBucketRequestPrivate;

class QTAWSSHIELD_EXPORT DisassociateDRTLogBucketRequest : public ShieldRequest {

public:
    DisassociateDRTLogBucketRequest(const DisassociateDRTLogBucketRequest &other);
    DisassociateDRTLogBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDRTLogBucketRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
