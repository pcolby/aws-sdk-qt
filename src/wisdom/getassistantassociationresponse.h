// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTASSOCIATIONRESPONSE_H
#define QTAWS_GETASSISTANTASSOCIATIONRESPONSE_H

#include "wisdomresponse.h"
#include "getassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantAssociationResponsePrivate;

class QTAWSWISDOM_EXPORT GetAssistantAssociationResponse : public WisdomResponse {
    Q_OBJECT

public:
    GetAssistantAssociationResponse(const GetAssistantAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssistantAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssistantAssociationResponse)
    Q_DISABLE_COPY(GetAssistantAssociationResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
