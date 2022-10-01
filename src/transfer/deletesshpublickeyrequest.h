// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYREQUEST_H
#define QTAWS_DELETESSHPUBLICKEYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteSshPublicKeyRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteSshPublicKeyRequest : public TransferRequest {

public:
    DeleteSshPublicKeyRequest(const DeleteSshPublicKeyRequest &other);
    DeleteSshPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSshPublicKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
