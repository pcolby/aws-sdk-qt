// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTRACKERREQUEST_H
#define QTAWS_DESCRIBEEVENTTRACKERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeEventTrackerRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeEventTrackerRequest : public PersonalizeRequest {

public:
    DescribeEventTrackerRequest(const DescribeEventTrackerRequest &other);
    DescribeEventTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
