// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKERBLOCKRESPONSE_H
#define QTAWS_DELETEWORKERBLOCKRESPONSE_H

#include "mturkresponse.h"
#include "deleteworkerblockrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteWorkerBlockResponsePrivate;

class QTAWSMTURK_EXPORT DeleteWorkerBlockResponse : public MTurkResponse {
    Q_OBJECT

public:
    DeleteWorkerBlockResponse(const DeleteWorkerBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkerBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkerBlockResponse)
    Q_DISABLE_COPY(DeleteWorkerBlockResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
