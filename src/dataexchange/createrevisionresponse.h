// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREVISIONRESPONSE_H
#define QTAWS_CREATEREVISIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "createrevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateRevisionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateRevisionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    CreateRevisionResponse(const CreateRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRevisionResponse)
    Q_DISABLE_COPY(CreateRevisionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
