// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREVISIONRESPONSE_H
#define QTAWS_DELETEREVISIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "deleterevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteRevisionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT DeleteRevisionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    DeleteRevisionResponse(const DeleteRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRevisionResponse)
    Q_DISABLE_COPY(DeleteRevisionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
