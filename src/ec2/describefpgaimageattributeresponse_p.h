// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEFPGAIMAGEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImageAttributeResponse;

class DescribeFpgaImageAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFpgaImageAttributeResponsePrivate(DescribeFpgaImageAttributeResponse * const q);

    void parseDescribeFpgaImageAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFpgaImageAttributeResponse)
    Q_DISABLE_COPY(DescribeFpgaImageAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
