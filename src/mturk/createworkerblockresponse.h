// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERBLOCKRESPONSE_H
#define QTAWS_CREATEWORKERBLOCKRESPONSE_H

#include "mturkresponse.h"
#include "createworkerblockrequest.h"

namespace QtAws {
namespace MTurk {

class CreateWorkerBlockResponsePrivate;

class QTAWSMTURK_EXPORT CreateWorkerBlockResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateWorkerBlockResponse(const CreateWorkerBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkerBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkerBlockResponse)
    Q_DISABLE_COPY(CreateWorkerBlockResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
