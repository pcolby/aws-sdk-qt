// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRIESREQUEST_H
#define QTAWS_DESCRIBEREGISTRIESREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRegistriesRequestPrivate;

class QTAWSECRPUBLIC_EXPORT DescribeRegistriesRequest : public EcrPublicRequest {

public:
    DescribeRegistriesRequest(const DescribeRegistriesRequest &other);
    DescribeRegistriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegistriesRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
