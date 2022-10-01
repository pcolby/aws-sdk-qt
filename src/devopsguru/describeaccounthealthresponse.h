// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTHEALTHRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTHEALTHRESPONSE_H

#include "devopsgururesponse.h"
#include "describeaccounthealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountHealthResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAccountHealthResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeAccountHealthResponse(const DescribeAccountHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountHealthResponse)
    Q_DISABLE_COPY(DescribeAccountHealthResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
