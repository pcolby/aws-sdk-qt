// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYGROUPREQUEST_H
#define QTAWS_CREATEKEYGROUPREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateKeyGroupRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateKeyGroupRequest : public CloudFrontRequest {

public:
    CreateKeyGroupRequest(const CreateKeyGroupRequest &other);
    CreateKeyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
