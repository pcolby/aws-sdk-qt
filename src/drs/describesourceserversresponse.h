// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCESERVERSRESPONSE_H
#define QTAWS_DESCRIBESOURCESERVERSRESPONSE_H

#include "drsresponse.h"
#include "describesourceserversrequest.h"

namespace QtAws {
namespace Drs {

class DescribeSourceServersResponsePrivate;

class QTAWSDRS_EXPORT DescribeSourceServersResponse : public DrsResponse {
    Q_OBJECT

public:
    DescribeSourceServersResponse(const DescribeSourceServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSourceServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceServersResponse)
    Q_DISABLE_COPY(DescribeSourceServersResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
