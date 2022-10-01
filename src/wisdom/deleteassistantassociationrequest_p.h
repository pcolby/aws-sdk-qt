// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEASSISTANTASSOCIATIONREQUEST_P_H

#include "wisdomrequest_p.h"
#include "deleteassistantassociationrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantAssociationRequest;

class DeleteAssistantAssociationRequestPrivate : public WisdomRequestPrivate {

public:
    DeleteAssistantAssociationRequestPrivate(const WisdomRequest::Action action,
                                   DeleteAssistantAssociationRequest * const q);
    DeleteAssistantAssociationRequestPrivate(const DeleteAssistantAssociationRequestPrivate &other,
                                   DeleteAssistantAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssistantAssociationRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
