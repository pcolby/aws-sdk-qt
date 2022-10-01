// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTKEYREQUEST_H
#define QTAWS_DELETEHOSTKEYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteHostKeyRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteHostKeyRequest : public TransferRequest {

public:
    DeleteHostKeyRequest(const DeleteHostKeyRequest &other);
    DeleteHostKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
