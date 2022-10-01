// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORGROUPSREQUEST_P_H
#define QTAWS_LISTVOICECONNECTORGROUPSREQUEST_P_H

#include "chimerequest_p.h"
#include "listvoiceconnectorgroupsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorGroupsRequest;

class ListVoiceConnectorGroupsRequestPrivate : public ChimeRequestPrivate {

public:
    ListVoiceConnectorGroupsRequestPrivate(const ChimeRequest::Action action,
                                   ListVoiceConnectorGroupsRequest * const q);
    ListVoiceConnectorGroupsRequestPrivate(const ListVoiceConnectorGroupsRequestPrivate &other,
                                   ListVoiceConnectorGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorGroupsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
