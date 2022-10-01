// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3BUCKETSREQUEST_H
#define QTAWS_LISTS3BUCKETSREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListS3BucketsRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ListS3BucketsRequest : public AmplifyBackendRequest {

public:
    ListS3BucketsRequest(const ListS3BucketsRequest &other);
    ListS3BucketsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListS3BucketsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
