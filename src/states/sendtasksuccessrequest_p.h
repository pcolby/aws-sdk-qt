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

#ifndef QTAWS_SENDTASKSUCCESSREQUEST_P_H
#define QTAWS_SENDTASKSUCCESSREQUEST_P_H

#include "sfn_p.h"
#include "sendtasksuccessrequest.h"

namespace AWS {

namespace SFN {

class SendTaskSuccessRequest;

class QTAWS_EXPORT SendTaskSuccessRequestPrivate : public SFNPrivate {

public:
    SendTaskSuccessRequestPrivate(const SFN::Action action,
                                   SendTaskSuccessRequest * const q);
    SendTaskSuccessRequestPrivate(const SendTaskSuccessRequestPrivate &other,
                                   SendTaskSuccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTaskSuccessRequest)

};

} // namespace SFN
} // namespace AWS

#endif
