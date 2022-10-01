// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEGROUPREQUEST_H
#define QTAWS_DESCRIBENODEGROUPREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeNodegroupRequestPrivate;

class QTAWSEKS_EXPORT DescribeNodegroupRequest : public EksRequest {

public:
    DescribeNodegroupRequest(const DescribeNodegroupRequest &other);
    DescribeNodegroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
