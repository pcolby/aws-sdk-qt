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

#ifndef QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_P_H
#define QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace SNS {

class CreateSMSSandboxPhoneNumberResponse;

class QTAWS_EXPORT CreateSMSSandboxPhoneNumberResponsePrivate : public SnsResponsePrivate {

public:

    CreateSMSSandboxPhoneNumberResponsePrivate(CreateSMSSandboxPhoneNumberResponse * const q);

    void parseCreateSMSSandboxPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(CreateSMSSandboxPhoneNumberResponsePrivate)

};

} // namespace SNS
} // namespace QtAws

#endif
