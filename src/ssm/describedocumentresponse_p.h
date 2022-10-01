// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTRESPONSE_P_H
#define QTAWS_DESCRIBEDOCUMENTRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentResponse;

class DescribeDocumentResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeDocumentResponsePrivate(DescribeDocumentResponse * const q);

    void parseDescribeDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentResponse)
    Q_DISABLE_COPY(DescribeDocumentResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
