// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTASSOCIATIONRESPONSE_H
#define QTAWS_CREATEASSISTANTASSOCIATIONRESPONSE_H

#include "wisdomresponse.h"
#include "createassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantAssociationResponsePrivate;

class QTAWSWISDOM_EXPORT CreateAssistantAssociationResponse : public WisdomResponse {
    Q_OBJECT

public:
    CreateAssistantAssociationResponse(const CreateAssistantAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssistantAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssistantAssociationResponse)
    Q_DISABLE_COPY(CreateAssistantAssociationResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
