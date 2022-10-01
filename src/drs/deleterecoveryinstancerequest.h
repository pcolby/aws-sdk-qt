// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYINSTANCEREQUEST_H
#define QTAWS_DELETERECOVERYINSTANCEREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DeleteRecoveryInstanceRequestPrivate;

class QTAWSDRS_EXPORT DeleteRecoveryInstanceRequest : public DrsRequest {

public:
    DeleteRecoveryInstanceRequest(const DeleteRecoveryInstanceRequest &other);
    DeleteRecoveryInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryInstanceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
