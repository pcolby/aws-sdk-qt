// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGREEMENTRESPONSE_H
#define QTAWS_CREATEAGREEMENTRESPONSE_H

#include "transferresponse.h"
#include "createagreementrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAgreementResponsePrivate;

class QTAWSTRANSFER_EXPORT CreateAgreementResponse : public TransferResponse {
    Q_OBJECT

public:
    CreateAgreementResponse(const CreateAgreementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAgreementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgreementResponse)
    Q_DISABLE_COPY(CreateAgreementResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
