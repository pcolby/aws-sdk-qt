// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVENTORYREQUEST_H
#define QTAWS_DELETEINVENTORYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteInventoryRequestPrivate;

class QTAWSSSM_EXPORT DeleteInventoryRequest : public SsmRequest {

public:
    DeleteInventoryRequest(const DeleteInventoryRequest &other);
    DeleteInventoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
