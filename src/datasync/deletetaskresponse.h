// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKRESPONSE_H
#define QTAWS_DELETETASKRESPONSE_H

#include "datasyncresponse.h"
#include "deletetaskrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteTaskResponsePrivate;

class QTAWSDATASYNC_EXPORT DeleteTaskResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DeleteTaskResponse(const DeleteTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskResponse)
    Q_DISABLE_COPY(DeleteTaskResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
