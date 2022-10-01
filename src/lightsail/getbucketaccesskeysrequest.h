// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCESSKEYSREQUEST_H
#define QTAWS_GETBUCKETACCESSKEYSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketAccessKeysRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketAccessKeysRequest : public LightsailRequest {

public:
    GetBucketAccessKeysRequest(const GetBucketAccessKeysRequest &other);
    GetBucketAccessKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAccessKeysRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
