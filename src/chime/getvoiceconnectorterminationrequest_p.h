/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTORTERMINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationRequest;

class QTAWS_EXPORT GetVoiceConnectorTerminationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorTerminationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorTerminationRequest * const q);
    GetVoiceConnectorTerminationRequestPrivate(const GetVoiceConnectorTerminationRequestPrivate &other,
                                   GetVoiceConnectorTerminationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
