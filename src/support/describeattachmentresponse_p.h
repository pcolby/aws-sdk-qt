// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACHMENTRESPONSE_P_H
#define QTAWS_DESCRIBEATTACHMENTRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeAttachmentResponse;

class DescribeAttachmentResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeAttachmentResponsePrivate(DescribeAttachmentResponse * const q);

    void parseDescribeAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAttachmentResponse)
    Q_DISABLE_COPY(DescribeAttachmentResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
