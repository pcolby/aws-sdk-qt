// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREFIXLISTSREQUEST_H
#define QTAWS_DESCRIBEPREFIXLISTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribePrefixListsRequestPrivate;

class QTAWSEC2_EXPORT DescribePrefixListsRequest : public Ec2Request {

public:
    DescribePrefixListsRequest(const DescribePrefixListsRequest &other);
    DescribePrefixListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrefixListsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
