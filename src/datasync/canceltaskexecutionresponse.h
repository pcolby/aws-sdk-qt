// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKEXECUTIONRESPONSE_H
#define QTAWS_CANCELTASKEXECUTIONRESPONSE_H

#include "datasyncresponse.h"
#include "canceltaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class CancelTaskExecutionResponsePrivate;

class QTAWSDATASYNC_EXPORT CancelTaskExecutionResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CancelTaskExecutionResponse(const CancelTaskExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelTaskExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTaskExecutionResponse)
    Q_DISABLE_COPY(CancelTaskExecutionResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
