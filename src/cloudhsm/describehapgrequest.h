// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHAPGREQUEST_H
#define QTAWS_DESCRIBEHAPGREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHapgRequestPrivate;

class QTAWSCLOUDHSM_EXPORT DescribeHapgRequest : public CloudHsmRequest {

public:
    DescribeHapgRequest(const DescribeHapgRequest &other);
    DescribeHapgRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
