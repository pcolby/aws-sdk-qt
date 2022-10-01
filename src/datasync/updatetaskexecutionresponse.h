// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKEXECUTIONRESPONSE_H
#define QTAWS_UPDATETASKEXECUTIONRESPONSE_H

#include "datasyncresponse.h"
#include "updatetaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskExecutionResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateTaskExecutionResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateTaskExecutionResponse(const UpdateTaskExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTaskExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskExecutionResponse)
    Q_DISABLE_COPY(UpdateTaskExecutionResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
