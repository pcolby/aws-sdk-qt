// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFUNCTIONREQUEST_H
#define QTAWS_DESCRIBEFUNCTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DescribeFunctionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DescribeFunctionRequest : public CloudFrontRequest {

public:
    DescribeFunctionRequest(const DescribeFunctionRequest &other);
    DescribeFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
