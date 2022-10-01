// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTASADMINRESPONSE_P_H
#define QTAWS_DESCRIBEPRODUCTASADMINRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductAsAdminResponse;

class DescribeProductAsAdminResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProductAsAdminResponsePrivate(DescribeProductAsAdminResponse * const q);

    void parseDescribeProductAsAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProductAsAdminResponse)
    Q_DISABLE_COPY(DescribeProductAsAdminResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
