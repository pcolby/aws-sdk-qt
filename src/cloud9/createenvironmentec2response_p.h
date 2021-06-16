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

#ifndef QTAWS_CREATEENVIRONMENTEC2RESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTEC2RESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentEC2Response;

class QTAWS_EXPORT CreateEnvironmentEC2ResponsePrivate : public Cloud9ResponsePrivate {

public:

    CreateEnvironmentEC2ResponsePrivate(CreateEnvironmentEC2Response * const q);

    void parseCreateEnvironmentEC2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentEC2Response)
    Q_DISABLE_COPY(CreateEnvironmentEC2ResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
