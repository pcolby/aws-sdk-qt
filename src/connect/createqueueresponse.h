// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUERESPONSE_H
#define QTAWS_CREATEQUEUERESPONSE_H

#include "connectresponse.h"
#include "createqueuerequest.h"

namespace QtAws {
namespace Connect {

class CreateQueueResponsePrivate;

class QTAWSCONNECT_EXPORT CreateQueueResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateQueueResponse(const CreateQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueueResponse)
    Q_DISABLE_COPY(CreateQueueResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
