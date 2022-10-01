// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_H

#include "neptuneresponse.h"
#include "describevaliddbinstancemodificationsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeValidDBInstanceModificationsResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeValidDBInstanceModificationsResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeValidDBInstanceModificationsResponse(const DescribeValidDBInstanceModificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeValidDBInstanceModificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeValidDBInstanceModificationsResponse)
    Q_DISABLE_COPY(DescribeValidDBInstanceModificationsResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
