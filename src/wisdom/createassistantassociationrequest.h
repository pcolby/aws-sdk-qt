// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTASSOCIATIONREQUEST_H
#define QTAWS_CREATEASSISTANTASSOCIATIONREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantAssociationRequestPrivate;

class QTAWSWISDOM_EXPORT CreateAssistantAssociationRequest : public WisdomRequest {

public:
    CreateAssistantAssociationRequest(const CreateAssistantAssociationRequest &other);
    CreateAssistantAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
