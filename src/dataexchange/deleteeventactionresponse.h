// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTACTIONRESPONSE_H
#define QTAWS_DELETEEVENTACTIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "deleteeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteEventActionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT DeleteEventActionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    DeleteEventActionResponse(const DeleteEventActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventActionResponse)
    Q_DISABLE_COPY(DeleteEventActionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
