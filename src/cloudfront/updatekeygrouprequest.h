// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYGROUPREQUEST_H
#define QTAWS_UPDATEKEYGROUPREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateKeyGroupRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateKeyGroupRequest : public CloudFrontRequest {

public:
    UpdateKeyGroupRequest(const UpdateKeyGroupRequest &other);
    UpdateKeyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
