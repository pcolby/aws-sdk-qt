// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassificationJobResponse;

class DescribeDocumentClassificationJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeDocumentClassificationJobResponsePrivate(DescribeDocumentClassificationJobResponse * const q);

    void parseDescribeDocumentClassificationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentClassificationJobResponse)
    Q_DISABLE_COPY(DescribeDocumentClassificationJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
