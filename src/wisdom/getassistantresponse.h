// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTRESPONSE_H
#define QTAWS_GETASSISTANTRESPONSE_H

#include "wisdomresponse.h"
#include "getassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantResponsePrivate;

class QTAWSWISDOM_EXPORT GetAssistantResponse : public WisdomResponse {
    Q_OBJECT

public:
    GetAssistantResponse(const GetAssistantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssistantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssistantResponse)
    Q_DISABLE_COPY(GetAssistantResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
