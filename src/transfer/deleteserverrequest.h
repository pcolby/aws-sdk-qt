// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERREQUEST_H
#define QTAWS_DELETESERVERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteServerRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteServerRequest : public TransferRequest {

public:
    DeleteServerRequest(const DeleteServerRequest &other);
    DeleteServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
