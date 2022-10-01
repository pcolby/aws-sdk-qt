// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGAGEMENTREQUEST_H
#define QTAWS_DESCRIBEENGAGEMENTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribeEngagementRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT DescribeEngagementRequest : public SsmContactsRequest {

public:
    DescribeEngagementRequest(const DescribeEngagementRequest &other);
    DescribeEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
