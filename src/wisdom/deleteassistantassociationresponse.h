// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTASSOCIATIONRESPONSE_H
#define QTAWS_DELETEASSISTANTASSOCIATIONRESPONSE_H

#include "wisdomresponse.h"
#include "deleteassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantAssociationResponsePrivate;

class QTAWSWISDOM_EXPORT DeleteAssistantAssociationResponse : public WisdomResponse {
    Q_OBJECT

public:
    DeleteAssistantAssociationResponse(const DeleteAssistantAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssistantAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssistantAssociationResponse)
    Q_DISABLE_COPY(DeleteAssistantAssociationResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
