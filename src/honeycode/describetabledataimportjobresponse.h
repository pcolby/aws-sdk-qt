// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEDATAIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBETABLEDATAIMPORTJOBRESPONSE_H

#include "honeycoderesponse.h"
#include "describetabledataimportjobrequest.h"

namespace QtAws {
namespace Honeycode {

class DescribeTableDataImportJobResponsePrivate;

class QTAWSHONEYCODE_EXPORT DescribeTableDataImportJobResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    DescribeTableDataImportJobResponse(const DescribeTableDataImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTableDataImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableDataImportJobResponse)
    Q_DISABLE_COPY(DescribeTableDataImportJobResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
