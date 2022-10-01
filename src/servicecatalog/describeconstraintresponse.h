// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONSTRAINTRESPONSE_H
#define QTAWS_DESCRIBECONSTRAINTRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeConstraintResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeConstraintResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeConstraintResponse(const DescribeConstraintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConstraintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConstraintResponse)
    Q_DISABLE_COPY(DescribeConstraintResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
