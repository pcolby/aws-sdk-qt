/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateDiscoveredResourceResponse;

class QTAWS_EXPORT DisassociateDiscoveredResourceResponsePrivate : public MigrationHubResponsePrivate {
    Q_OBJECT

public:

    DisassociateDiscoveredResourceResponsePrivate(DisassociateDiscoveredResourceResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDiscoveredResourceResponse)
    Q_DISABLE_COPY(DisassociateDiscoveredResourceResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
