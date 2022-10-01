// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGESRESPONSE_P_H
#define QTAWS_DESCRIBEFPGAIMAGESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImagesResponse;

class DescribeFpgaImagesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFpgaImagesResponsePrivate(DescribeFpgaImagesResponse * const q);

    void parseDescribeFpgaImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFpgaImagesResponse)
    Q_DISABLE_COPY(DescribeFpgaImagesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
