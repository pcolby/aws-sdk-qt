// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTLOGBUCKETREQUEST_H
#define QTAWS_ASSOCIATEDRTLOGBUCKETREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class AssociateDRTLogBucketRequestPrivate;

class QTAWSSHIELD_EXPORT AssociateDRTLogBucketRequest : public ShieldRequest {

public:
    AssociateDRTLogBucketRequest(const AssociateDRTLogBucketRequest &other);
    AssociateDRTLogBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDRTLogBucketRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
