// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFIERRESPONSE_P_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFIERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassifierResponse;

class DescribeDocumentClassifierResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeDocumentClassifierResponsePrivate(DescribeDocumentClassifierResponse * const q);

    void parseDescribeDocumentClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentClassifierResponse)
    Q_DISABLE_COPY(DescribeDocumentClassifierResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
