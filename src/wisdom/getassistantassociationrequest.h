// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTASSOCIATIONREQUEST_H
#define QTAWS_GETASSISTANTASSOCIATIONREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantAssociationRequestPrivate;

class QTAWSWISDOM_EXPORT GetAssistantAssociationRequest : public WisdomRequest {

public:
    GetAssistantAssociationRequest(const GetAssistantAssociationRequest &other);
    GetAssistantAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
