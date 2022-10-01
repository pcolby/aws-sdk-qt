// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPCONFIGREQUEST_H
#define QTAWS_GETKEYGROUPCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetKeyGroupConfigRequest : public CloudFrontRequest {

public:
    GetKeyGroupConfigRequest(const GetKeyGroupConfigRequest &other);
    GetKeyGroupConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyGroupConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
