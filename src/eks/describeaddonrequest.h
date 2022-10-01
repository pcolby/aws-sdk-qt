// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONREQUEST_H
#define QTAWS_DESCRIBEADDONREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonRequestPrivate;

class QTAWSEKS_EXPORT DescribeAddonRequest : public EksRequest {

public:
    DescribeAddonRequest(const DescribeAddonRequest &other);
    DescribeAddonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
