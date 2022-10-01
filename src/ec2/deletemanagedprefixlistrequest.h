// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDPREFIXLISTREQUEST_H
#define QTAWS_DELETEMANAGEDPREFIXLISTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteManagedPrefixListRequestPrivate;

class QTAWSEC2_EXPORT DeleteManagedPrefixListRequest : public Ec2Request {

public:
    DeleteManagedPrefixListRequest(const DeleteManagedPrefixListRequest &other);
    DeleteManagedPrefixListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteManagedPrefixListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
