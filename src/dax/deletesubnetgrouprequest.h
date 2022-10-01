// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETGROUPREQUEST_H
#define QTAWS_DELETESUBNETGROUPREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DeleteSubnetGroupRequestPrivate;

class QTAWSDAX_EXPORT DeleteSubnetGroupRequest : public DaxRequest {

public:
    DeleteSubnetGroupRequest(const DeleteSubnetGroupRequest &other);
    DeleteSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
