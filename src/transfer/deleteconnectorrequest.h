// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORREQUEST_H
#define QTAWS_DELETECONNECTORREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteConnectorRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteConnectorRequest : public TransferRequest {

public:
    DeleteConnectorRequest(const DeleteConnectorRequest &other);
    DeleteConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
