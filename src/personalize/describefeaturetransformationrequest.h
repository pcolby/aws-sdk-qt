// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATURETRANSFORMATIONREQUEST_H
#define QTAWS_DESCRIBEFEATURETRANSFORMATIONREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFeatureTransformationRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeFeatureTransformationRequest : public PersonalizeRequest {

public:
    DescribeFeatureTransformationRequest(const DescribeFeatureTransformationRequest &other);
    DescribeFeatureTransformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureTransformationRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
