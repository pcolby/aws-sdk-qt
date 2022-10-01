// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONREQUEST_H
#define QTAWS_DELETEFUNCTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFunctionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteFunctionRequest : public CloudFrontRequest {

public:
    DeleteFunctionRequest(const DeleteFunctionRequest &other);
    DeleteFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
