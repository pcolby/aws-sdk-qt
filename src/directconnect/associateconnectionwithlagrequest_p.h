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

#ifndef QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_P_H
#define QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_P_H

#include "directconnect_p.h"
#include "associateconnectionwithlagrequest.h"

namespace AWS {

namespace DirectConnect {

class AssociateConnectionWithLagRequest;

class QTAWS_EXPORT AssociateConnectionWithLagRequestPrivate : public DirectConnectPrivate {

public:
    AssociateConnectionWithLagRequestPrivate(const DirectConnect::Action action,
                                   AssociateConnectionWithLagRequest * const q);
    AssociateConnectionWithLagRequestPrivate(const AssociateConnectionWithLagRequestPrivate &other,
                                   AssociateConnectionWithLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateConnectionWithLagRequest)

};

} // namespace DirectConnect
} // namespace AWS

#endif
