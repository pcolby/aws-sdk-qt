// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGESRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImagesResponse;

class DescribeImagesResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit DescribeImagesResponsePrivate(DescribeImagesResponse * const q);

    void parseDescribeImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImagesResponse)
    Q_DISABLE_COPY(DescribeImagesResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
