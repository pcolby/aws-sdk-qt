// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONSTRAINTRESPONSE_P_H
#define QTAWS_DESCRIBECONSTRAINTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeConstraintResponse;

class DescribeConstraintResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeConstraintResponsePrivate(DescribeConstraintResponse * const q);

    void parseDescribeConstraintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConstraintResponse)
    Q_DISABLE_COPY(DescribeConstraintResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
