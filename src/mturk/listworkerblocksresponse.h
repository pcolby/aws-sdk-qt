// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERBLOCKSRESPONSE_H
#define QTAWS_LISTWORKERBLOCKSRESPONSE_H

#include "mturkresponse.h"
#include "listworkerblocksrequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkerBlocksResponsePrivate;

class QTAWSMTURK_EXPORT ListWorkerBlocksResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListWorkerBlocksResponse(const ListWorkerBlocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkerBlocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkerBlocksResponse)
    Q_DISABLE_COPY(ListWorkerBlocksResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
