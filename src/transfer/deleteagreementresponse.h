// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGREEMENTRESPONSE_H
#define QTAWS_DELETEAGREEMENTRESPONSE_H

#include "transferresponse.h"
#include "deleteagreementrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteAgreementResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteAgreementResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteAgreementResponse(const DeleteAgreementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAgreementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAgreementResponse)
    Q_DISABLE_COPY(DeleteAgreementResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
