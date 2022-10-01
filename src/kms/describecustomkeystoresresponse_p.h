// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMKEYSTORESRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMKEYSTORESRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DescribeCustomKeyStoresResponse;

class DescribeCustomKeyStoresResponsePrivate : public KmsResponsePrivate {

public:

    explicit DescribeCustomKeyStoresResponsePrivate(DescribeCustomKeyStoresResponse * const q);

    void parseDescribeCustomKeyStoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomKeyStoresResponse)
    Q_DISABLE_COPY(DescribeCustomKeyStoresResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
