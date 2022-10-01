// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPREQUEST_H
#define QTAWS_GETKEYGROUPREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetKeyGroupRequest : public CloudFrontRequest {

public:
    GetKeyGroupRequest(const GetKeyGroupRequest &other);
    GetKeyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
