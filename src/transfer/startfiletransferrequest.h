// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFILETRANSFERREQUEST_H
#define QTAWS_STARTFILETRANSFERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class StartFileTransferRequestPrivate;

class QTAWSTRANSFER_EXPORT StartFileTransferRequest : public TransferRequest {

public:
    StartFileTransferRequest(const StartFileTransferRequest &other);
    StartFileTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFileTransferRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
