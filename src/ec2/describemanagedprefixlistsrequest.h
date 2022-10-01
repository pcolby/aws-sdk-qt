// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDPREFIXLISTSREQUEST_H
#define QTAWS_DESCRIBEMANAGEDPREFIXLISTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeManagedPrefixListsRequestPrivate;

class QTAWSEC2_EXPORT DescribeManagedPrefixListsRequest : public Ec2Request {

public:
    DescribeManagedPrefixListsRequest(const DescribeManagedPrefixListsRequest &other);
    DescribeManagedPrefixListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedPrefixListsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
