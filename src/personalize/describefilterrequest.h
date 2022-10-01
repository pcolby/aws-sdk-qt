// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILTERREQUEST_H
#define QTAWS_DESCRIBEFILTERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFilterRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeFilterRequest : public PersonalizeRequest {

public:
    DescribeFilterRequest(const DescribeFilterRequest &other);
    DescribeFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
