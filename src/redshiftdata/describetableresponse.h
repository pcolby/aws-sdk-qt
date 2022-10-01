// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESPONSE_H
#define QTAWS_DESCRIBETABLERESPONSE_H

#include "redshiftdataresponse.h"
#include "describetablerequest.h"

namespace QtAws {
namespace RedshiftData {

class DescribeTableResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT DescribeTableResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    DescribeTableResponse(const DescribeTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableResponse)
    Q_DISABLE_COPY(DescribeTableResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
