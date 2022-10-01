// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNINGJOBRESPONSE_P_H
#define QTAWS_DESCRIBESIGNINGJOBRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class DescribeSigningJobResponse;

class DescribeSigningJobResponsePrivate : public SignerResponsePrivate {

public:

    explicit DescribeSigningJobResponsePrivate(DescribeSigningJobResponse * const q);

    void parseDescribeSigningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSigningJobResponse)
    Q_DISABLE_COPY(DescribeSigningJobResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
