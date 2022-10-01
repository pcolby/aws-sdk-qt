// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEADDRESSRESPONSE_P_H
#define QTAWS_ALLOCATEADDRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AllocateAddressResponse;

class AllocateAddressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AllocateAddressResponsePrivate(AllocateAddressResponse * const q);

    void parseAllocateAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateAddressResponse)
    Q_DISABLE_COPY(AllocateAddressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
