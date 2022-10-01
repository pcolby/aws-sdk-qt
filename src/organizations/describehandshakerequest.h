// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHANDSHAKEREQUEST_H
#define QTAWS_DESCRIBEHANDSHAKEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeHandshakeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeHandshakeRequest : public OrganizationsRequest {

public:
    DescribeHandshakeRequest(const DescribeHandshakeRequest &other);
    DescribeHandshakeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
