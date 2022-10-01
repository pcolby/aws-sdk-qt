// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONREQUEST_H
#define QTAWS_GETFUNCTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFunctionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetFunctionRequest : public CloudFrontRequest {

public:
    GetFunctionRequest(const GetFunctionRequest &other);
    GetFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
