// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTASSOCIATIONREQUEST_P_H
#define QTAWS_GETASSISTANTASSOCIATIONREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantAssociationRequest;

class GetAssistantAssociationRequestPrivate : public WisdomRequestPrivate {

public:
    GetAssistantAssociationRequestPrivate(const WisdomRequest::Action action,
                                   GetAssistantAssociationRequest * const q);
    GetAssistantAssociationRequestPrivate(const GetAssistantAssociationRequestPrivate &other,
                                   GetAssistantAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
