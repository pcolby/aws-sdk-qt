// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTRESPONSE_H
#define QTAWS_DELETEASSISTANTRESPONSE_H

#include "wisdomresponse.h"
#include "deleteassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantResponsePrivate;

class QTAWSWISDOM_EXPORT DeleteAssistantResponse : public WisdomResponse {
    Q_OBJECT

public:
    DeleteAssistantResponse(const DeleteAssistantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssistantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssistantResponse)
    Q_DISABLE_COPY(DeleteAssistantResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
