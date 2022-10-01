// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTASSISTANTASSOCIATIONSREQUEST_P_H

#include "wisdomrequest_p.h"
#include "listassistantassociationsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantAssociationsRequest;

class ListAssistantAssociationsRequestPrivate : public WisdomRequestPrivate {

public:
    ListAssistantAssociationsRequestPrivate(const WisdomRequest::Action action,
                                   ListAssistantAssociationsRequest * const q);
    ListAssistantAssociationsRequestPrivate(const ListAssistantAssociationsRequestPrivate &other,
                                   ListAssistantAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssistantAssociationsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
