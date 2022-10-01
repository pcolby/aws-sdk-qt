// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYRESPONSE_P_H
#define QTAWS_DESCRIBEKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DescribeKeyResponse;

class DescribeKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit DescribeKeyResponsePrivate(DescribeKeyResponse * const q);

    void parseDescribeKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeKeyResponse)
    Q_DISABLE_COPY(DescribeKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
