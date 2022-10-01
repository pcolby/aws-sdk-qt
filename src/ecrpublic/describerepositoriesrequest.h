// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESREQUEST_H
#define QTAWS_DESCRIBEREPOSITORIESREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRepositoriesRequestPrivate;

class QTAWSECRPUBLIC_EXPORT DescribeRepositoriesRequest : public EcrPublicRequest {

public:
    DescribeRepositoriesRequest(const DescribeRepositoriesRequest &other);
    DescribeRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoriesRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
