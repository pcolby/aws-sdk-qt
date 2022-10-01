// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKEXECUTIONRESPONSE_H
#define QTAWS_STARTTASKEXECUTIONRESPONSE_H

#include "datasyncresponse.h"
#include "starttaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class StartTaskExecutionResponsePrivate;

class QTAWSDATASYNC_EXPORT StartTaskExecutionResponse : public DataSyncResponse {
    Q_OBJECT

public:
    StartTaskExecutionResponse(const StartTaskExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTaskExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTaskExecutionResponse)
    Q_DISABLE_COPY(StartTaskExecutionResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
