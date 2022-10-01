// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTRESPONSE_H
#define QTAWS_CREATEASSISTANTRESPONSE_H

#include "wisdomresponse.h"
#include "createassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantResponsePrivate;

class QTAWSWISDOM_EXPORT CreateAssistantResponse : public WisdomResponse {
    Q_OBJECT

public:
    CreateAssistantResponse(const CreateAssistantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssistantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssistantResponse)
    Q_DISABLE_COPY(CreateAssistantResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
