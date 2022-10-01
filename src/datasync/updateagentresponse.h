// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTRESPONSE_H
#define QTAWS_UPDATEAGENTRESPONSE_H

#include "datasyncresponse.h"
#include "updateagentrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateAgentResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateAgentResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateAgentResponse(const UpdateAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgentResponse)
    Q_DISABLE_COPY(UpdateAgentResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
