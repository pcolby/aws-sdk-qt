// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeOrganizationRequestPrivate;

class QTAWSWORKMAIL_EXPORT DescribeOrganizationRequest : public WorkMailRequest {

public:
    DescribeOrganizationRequest(const DescribeOrganizationRequest &other);
    DescribeOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
