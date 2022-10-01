// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFILETRANSFERRESPONSE_H
#define QTAWS_STARTFILETRANSFERRESPONSE_H

#include "transferresponse.h"
#include "startfiletransferrequest.h"

namespace QtAws {
namespace Transfer {

class StartFileTransferResponsePrivate;

class QTAWSTRANSFER_EXPORT StartFileTransferResponse : public TransferResponse {
    Q_OBJECT

public:
    StartFileTransferResponse(const StartFileTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFileTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFileTransferResponse)
    Q_DISABLE_COPY(StartFileTransferResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
