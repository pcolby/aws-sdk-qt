// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMREQUEST_H
#define QTAWS_DESCRIBEHSMREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHsmRequestPrivate;

class QTAWSCLOUDHSM_EXPORT DescribeHsmRequest : public CloudHsmRequest {

public:
    DescribeHsmRequest(const DescribeHsmRequest &other);
    DescribeHsmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
