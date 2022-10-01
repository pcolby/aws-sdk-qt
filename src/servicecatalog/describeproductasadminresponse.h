// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTASADMINRESPONSE_H
#define QTAWS_DESCRIBEPRODUCTASADMINRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeproductasadminrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductAsAdminResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProductAsAdminResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProductAsAdminResponse(const DescribeProductAsAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProductAsAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductAsAdminResponse)
    Q_DISABLE_COPY(DescribeProductAsAdminResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
