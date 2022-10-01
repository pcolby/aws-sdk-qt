// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSREQUEST_H
#define QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListAssociationsRequestPrivate;

class QTAWSEC2_EXPORT GetManagedPrefixListAssociationsRequest : public Ec2Request {

public:
    GetManagedPrefixListAssociationsRequest(const GetManagedPrefixListAssociationsRequest &other);
    GetManagedPrefixListAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedPrefixListAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
