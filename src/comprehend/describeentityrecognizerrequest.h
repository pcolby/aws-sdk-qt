// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRECOGNIZERREQUEST_H
#define QTAWS_DESCRIBEENTITYRECOGNIZERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntityRecognizerRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEntityRecognizerRequest : public ComprehendRequest {

public:
    DescribeEntityRecognizerRequest(const DescribeEntityRecognizerRequest &other);
    DescribeEntityRecognizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
