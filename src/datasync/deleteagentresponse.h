// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGENTRESPONSE_H
#define QTAWS_DELETEAGENTRESPONSE_H

#include "datasyncresponse.h"
#include "deleteagentrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteAgentResponsePrivate;

class QTAWSDATASYNC_EXPORT DeleteAgentResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DeleteAgentResponse(const DeleteAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAgentResponse)
    Q_DISABLE_COPY(DeleteAgentResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
