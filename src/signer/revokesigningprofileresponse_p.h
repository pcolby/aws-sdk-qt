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

#ifndef QTAWS_REVOKESIGNINGPROFILERESPONSE_P_H
#define QTAWS_REVOKESIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace signer {

class RevokeSigningProfileResponse;

class QTAWS_EXPORT RevokeSigningProfileResponsePrivate : public signerResponsePrivate {

public:

    RevokeSigningProfileResponsePrivate(RevokeSigningProfileResponse * const q);

    void parseRevokeSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSigningProfileResponse)
    Q_DISABLE_COPY(RevokeSigningProfileResponsePrivate)

};

} // namespace signer
} // namespace QtAws

#endif
