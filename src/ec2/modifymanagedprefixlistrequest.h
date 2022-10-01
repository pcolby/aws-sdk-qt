// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMANAGEDPREFIXLISTREQUEST_H
#define QTAWS_MODIFYMANAGEDPREFIXLISTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyManagedPrefixListRequestPrivate;

class QTAWSEC2_EXPORT ModifyManagedPrefixListRequest : public Ec2Request {

public:
    ModifyManagedPrefixListRequest(const ModifyManagedPrefixListRequest &other);
    ModifyManagedPrefixListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyManagedPrefixListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
