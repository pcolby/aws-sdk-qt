// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAEXCHANGERESPONSE_H
#define QTAWS_DATAEXCHANGERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdataexchangeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DataExchange {

class DataExchangeResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT DataExchangeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DataExchangeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DataExchangeResponse(DataExchangeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataExchangeResponse)
    Q_DISABLE_COPY(DataExchangeResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
