/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEBGPPEERREQUEST_P_H
#define QTAWS_CREATEBGPPEERREQUEST_P_H

#include "directconnect_p.h"
#include "createbgppeerrequest.h"

namespace AWS {

namespace DirectConnect {

class CreateBGPPeerRequest;

class QTAWS_EXPORT CreateBGPPeerRequestPrivate : public DirectConnectPrivate {

public:
    CreateBGPPeerRequestPrivate(const DirectConnect::Action action,
                                   CreateBGPPeerRequest * const q);
    CreateBGPPeerRequestPrivate(const CreateBGPPeerRequestPrivate &other,
                                   CreateBGPPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBGPPeerRequest)

};

} // namespace DirectConnect
} // namespace AWS

#endif
