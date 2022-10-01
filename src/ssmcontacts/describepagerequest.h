// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPAGEREQUEST_H
#define QTAWS_DESCRIBEPAGEREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribePageRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT DescribePageRequest : public SsmContactsRequest {

public:
    DescribePageRequest(const DescribePageRequest &other);
    DescribePageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePageRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
