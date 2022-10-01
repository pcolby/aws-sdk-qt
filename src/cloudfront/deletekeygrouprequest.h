// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYGROUPREQUEST_H
#define QTAWS_DELETEKEYGROUPREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteKeyGroupRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteKeyGroupRequest : public CloudFrontRequest {

public:
    DeleteKeyGroupRequest(const DeleteKeyGroupRequest &other);
    DeleteKeyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
