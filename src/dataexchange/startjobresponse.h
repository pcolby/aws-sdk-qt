// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRESPONSE_H
#define QTAWS_STARTJOBRESPONSE_H

#include "dataexchangeresponse.h"
#include "startjobrequest.h"

namespace QtAws {
namespace DataExchange {

class StartJobResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT StartJobResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    StartJobResponse(const StartJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobResponse)
    Q_DISABLE_COPY(StartJobResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
