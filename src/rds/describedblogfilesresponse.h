// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBLOGFILESRESPONSE_H
#define QTAWS_DESCRIBEDBLOGFILESRESPONSE_H

#include "rdsresponse.h"
#include "describedblogfilesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBLogFilesResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBLogFilesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBLogFilesResponse(const DescribeDBLogFilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBLogFilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBLogFilesResponse)
    Q_DISABLE_COPY(DescribeDBLogFilesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
