// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERSRESPONSE_H
#define QTAWS_DESCRIBESERVERSRESPONSE_H

#include "opsworkscmresponse.h"
#include "describeserversrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeServersResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeServersResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    DescribeServersResponse(const DescribeServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServersResponse)
    Q_DISABLE_COPY(DescribeServersResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
