// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESREQUEST_H
#define QTAWS_DESCRIBEREPOSITORIESREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRepositoriesRequestPrivate;

class QTAWSECR_EXPORT DescribeRepositoriesRequest : public EcrRequest {

public:
    DescribeRepositoriesRequest(const DescribeRepositoriesRequest &other);
    DescribeRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoriesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
