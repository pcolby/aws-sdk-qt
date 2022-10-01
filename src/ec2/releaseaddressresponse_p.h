// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEADDRESSRESPONSE_P_H
#define QTAWS_RELEASEADDRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReleaseAddressResponse;

class ReleaseAddressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReleaseAddressResponsePrivate(ReleaseAddressResponse * const q);

    void parseReleaseAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleaseAddressResponse)
    Q_DISABLE_COPY(ReleaseAddressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
