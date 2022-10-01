/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_RESTORETABLERESPONSE_P_H
#define QTAWS_RESTORETABLERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class RestoreTableResponse;

class RestoreTableResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit RestoreTableResponsePrivate(RestoreTableResponse * const q);

    void parseRestoreTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableResponse)
    Q_DISABLE_COPY(RestoreTableResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
