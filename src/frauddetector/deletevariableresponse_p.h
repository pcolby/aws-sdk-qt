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

#ifndef QTAWS_DELETEVARIABLERESPONSE_P_H
#define QTAWS_DELETEVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteVariableResponse;

class DeleteVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteVariableResponsePrivate(DeleteVariableResponse * const q);

    void parseDeleteVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVariableResponse)
    Q_DISABLE_COPY(DeleteVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
