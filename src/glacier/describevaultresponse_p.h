// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVAULTRESPONSE_P_H
#define QTAWS_DESCRIBEVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class DescribeVaultResponse;

class DescribeVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit DescribeVaultResponsePrivate(DescribeVaultResponse * const q);

    void parseDescribeVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVaultResponse)
    Q_DISABLE_COPY(DescribeVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
