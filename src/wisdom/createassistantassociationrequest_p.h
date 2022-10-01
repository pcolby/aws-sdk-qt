// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEASSISTANTASSOCIATIONREQUEST_P_H

#include "wisdomrequest_p.h"
#include "createassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantAssociationRequest;

class CreateAssistantAssociationRequestPrivate : public WisdomRequestPrivate {

public:
    CreateAssistantAssociationRequestPrivate(const WisdomRequest::Action action,
                                   CreateAssistantAssociationRequest * const q);
    CreateAssistantAssociationRequestPrivate(const CreateAssistantAssociationRequestPrivate &other,
                                   CreateAssistantAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
