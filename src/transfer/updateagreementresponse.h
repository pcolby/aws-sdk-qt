// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGREEMENTRESPONSE_H
#define QTAWS_UPDATEAGREEMENTRESPONSE_H

#include "transferresponse.h"
#include "updateagreementrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAgreementResponsePrivate;

class QTAWSTRANSFER_EXPORT UpdateAgreementResponse : public TransferResponse {
    Q_OBJECT

public:
    UpdateAgreementResponse(const UpdateAgreementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAgreementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgreementResponse)
    Q_DISABLE_COPY(UpdateAgreementResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
