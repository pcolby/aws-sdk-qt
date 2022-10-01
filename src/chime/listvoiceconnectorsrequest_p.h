// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORSREQUEST_P_H
#define QTAWS_LISTVOICECONNECTORSREQUEST_P_H

#include "chimerequest_p.h"
#include "listvoiceconnectorsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorsRequest;

class ListVoiceConnectorsRequestPrivate : public ChimeRequestPrivate {

public:
    ListVoiceConnectorsRequestPrivate(const ChimeRequest::Action action,
                                   ListVoiceConnectorsRequest * const q);
    ListVoiceConnectorsRequestPrivate(const ListVoiceConnectorsRequestPrivate &other,
                                   ListVoiceConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
