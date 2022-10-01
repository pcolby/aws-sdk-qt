// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONREQUEST_H
#define QTAWS_UPDATEFUNCTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFunctionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateFunctionRequest : public CloudFrontRequest {

public:
    UpdateFunctionRequest(const UpdateFunctionRequest &other);
    UpdateFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
