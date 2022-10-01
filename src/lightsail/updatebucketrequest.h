// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETREQUEST_H
#define QTAWS_UPDATEBUCKETREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateBucketRequest : public LightsailRequest {

public:
    UpdateBucketRequest(const UpdateBucketRequest &other);
    UpdateBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBucketRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
