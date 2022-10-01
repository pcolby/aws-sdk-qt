// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETBUNDLEREQUEST_H
#define QTAWS_UPDATEBUCKETBUNDLEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketBundleRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateBucketBundleRequest : public LightsailRequest {

public:
    UpdateBucketBundleRequest(const UpdateBucketBundleRequest &other);
    UpdateBucketBundleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBucketBundleRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
