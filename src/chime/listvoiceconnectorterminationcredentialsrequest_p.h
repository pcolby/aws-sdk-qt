// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H
#define QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H

#include "chimerequest_p.h"
#include "listvoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorTerminationCredentialsRequest;

class ListVoiceConnectorTerminationCredentialsRequestPrivate : public ChimeRequestPrivate {

public:
    ListVoiceConnectorTerminationCredentialsRequestPrivate(const ChimeRequest::Action action,
                                   ListVoiceConnectorTerminationCredentialsRequest * const q);
    ListVoiceConnectorTerminationCredentialsRequestPrivate(const ListVoiceConnectorTerminationCredentialsRequestPrivate &other,
                                   ListVoiceConnectorTerminationCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
