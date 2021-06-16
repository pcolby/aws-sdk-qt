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

#ifndef QTAWS_SENDCOMMANDREQUEST_P_H
#define QTAWS_SENDCOMMANDREQUEST_P_H

#include "qldbsessionrequest_p.h"
#include "sendcommandrequest.h"

namespace QtAws {
namespace QLDBSession {

class SendCommandRequest;

class QTAWS_EXPORT SendCommandRequestPrivate : public QLDBSessionRequestPrivate {

public:
    SendCommandRequestPrivate(const QLDBSessionRequest::Action action,
                                   SendCommandRequest * const q);
    SendCommandRequestPrivate(const SendCommandRequestPrivate &other,
                                   SendCommandRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendCommandRequest)

};

} // namespace QLDBSession
} // namespace QtAws

#endif
