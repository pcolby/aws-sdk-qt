// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVISIONRESPONSE_H
#define QTAWS_UPDATEREVISIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "updaterevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateRevisionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT UpdateRevisionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    UpdateRevisionResponse(const UpdateRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRevisionResponse)
    Q_DISABLE_COPY(UpdateRevisionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
