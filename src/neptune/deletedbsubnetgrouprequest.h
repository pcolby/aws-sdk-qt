// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSUBNETGROUPREQUEST_H
#define QTAWS_DELETEDBSUBNETGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBSubnetGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBSubnetGroupRequest : public NeptuneRequest {

public:
    DeleteDBSubnetGroupRequest(const DeleteDBSubnetGroupRequest &other);
    DeleteDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSubnetGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
