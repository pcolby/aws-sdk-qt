// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSRESPONSE_H
#define QTAWS_DESCRIBEBACKUPSRESPONSE_H

#include "opsworkscmresponse.h"
#include "describebackupsrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeBackupsResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeBackupsResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    DescribeBackupsResponse(const DescribeBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupsResponse)
    Q_DISABLE_COPY(DescribeBackupsResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
