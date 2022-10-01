// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRESOURCEACCESSFORBUCKETREQUEST_H
#define QTAWS_SETRESOURCEACCESSFORBUCKETREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class SetResourceAccessForBucketRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT SetResourceAccessForBucketRequest : public LightsailRequest {

public:
    SetResourceAccessForBucketRequest(const SetResourceAccessForBucketRequest &other);
    SetResourceAccessForBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetResourceAccessForBucketRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
