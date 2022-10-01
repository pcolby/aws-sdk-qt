// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEHEADERSPOLICYREQUEST_H
#define QTAWS_DELETERESPONSEHEADERSPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteResponseHeadersPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteResponseHeadersPolicyRequest : public CloudFrontRequest {

public:
    DeleteResponseHeadersPolicyRequest(const DeleteResponseHeadersPolicyRequest &other);
    DeleteResponseHeadersPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
