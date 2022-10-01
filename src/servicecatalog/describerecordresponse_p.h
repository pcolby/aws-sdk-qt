// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECORDRESPONSE_P_H
#define QTAWS_DESCRIBERECORDRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeRecordResponse;

class DescribeRecordResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeRecordResponsePrivate(DescribeRecordResponse * const q);

    void parseDescribeRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecordResponse)
    Q_DISABLE_COPY(DescribeRecordResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
