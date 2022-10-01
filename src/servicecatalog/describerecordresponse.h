// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECORDRESPONSE_H
#define QTAWS_DESCRIBERECORDRESPONSE_H

#include "servicecatalogresponse.h"
#include "describerecordrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeRecordResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeRecordResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeRecordResponse(const DescribeRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecordResponse)
    Q_DISABLE_COPY(DescribeRecordResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
