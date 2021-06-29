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

#ifndef QTAWS_CANCELEXPORTTASKRESPONSE_P_H
#define QTAWS_CANCELEXPORTTASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace EC2 {

class CancelExportTaskResponse;

class CancelExportTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelExportTaskResponsePrivate(CancelExportTaskResponse * const q);

    void parseCancelExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelExportTaskResponse)
    Q_DISABLE_COPY(CancelExportTaskResponsePrivate)

};

} // namespace EC2
} // namespace QtAws

#endif
