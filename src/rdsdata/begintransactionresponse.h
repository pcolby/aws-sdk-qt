// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BEGINTRANSACTIONRESPONSE_H
#define QTAWS_BEGINTRANSACTIONRESPONSE_H

#include "rdsdataresponse.h"
#include "begintransactionrequest.h"

namespace QtAws {
namespace RdsData {

class BeginTransactionResponsePrivate;

class QTAWSRDSDATA_EXPORT BeginTransactionResponse : public RdsDataResponse {
    Q_OBJECT

public:
    BeginTransactionResponse(const BeginTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BeginTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BeginTransactionResponse)
    Q_DISABLE_COPY(BeginTransactionResponse)

};

} // namespace RdsData
} // namespace QtAws

#endif
