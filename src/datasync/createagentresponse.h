// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTRESPONSE_H
#define QTAWS_CREATEAGENTRESPONSE_H

#include "datasyncresponse.h"
#include "createagentrequest.h"

namespace QtAws {
namespace DataSync {

class CreateAgentResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateAgentResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateAgentResponse(const CreateAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgentResponse)
    Q_DISABLE_COPY(CreateAgentResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
