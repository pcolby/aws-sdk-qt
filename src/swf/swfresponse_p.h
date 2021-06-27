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

#ifndef QTAWS_SWFRESPONSE_P_H
#define QTAWS_SWFRESPONSE_P_H

namespace QtAws {
namespace SWF {

class SwfResponse;

class SwfResponsePrivate {

public:

    SwfResponsePrivate(SwfResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

protected:
    SwfResponse * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(SwfResponse)
    Q_DISABLE_COPY(SwfResponsePrivate)

};

} // namespace SWF
} // namespace QtAws

#endif
