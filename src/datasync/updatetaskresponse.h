// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKRESPONSE_H
#define QTAWS_UPDATETASKRESPONSE_H

#include "datasyncresponse.h"
#include "updatetaskrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateTaskResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateTaskResponse(const UpdateTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskResponse)
    Q_DISABLE_COPY(UpdateTaskResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
