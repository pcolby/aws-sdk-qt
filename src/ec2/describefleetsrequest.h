// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSREQUEST_H
#define QTAWS_DESCRIBEFLEETSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetsRequestPrivate;

class QTAWSEC2_EXPORT DescribeFleetsRequest : public Ec2Request {

public:
    DescribeFleetsRequest(const DescribeFleetsRequest &other);
    DescribeFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
