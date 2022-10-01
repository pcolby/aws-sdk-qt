// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONREQUEST_H
#define QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RestoreManagedPrefixListVersionRequestPrivate;

class QTAWSEC2_EXPORT RestoreManagedPrefixListVersionRequest : public Ec2Request {

public:
    RestoreManagedPrefixListVersionRequest(const RestoreManagedPrefixListVersionRequest &other);
    RestoreManagedPrefixListVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreManagedPrefixListVersionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
