// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSTATUSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTSTATUSRESPONSE_H

#include "cloud9response.h"
#include "describeenvironmentstatusrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentStatusResponsePrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentStatusResponse : public Cloud9Response {
    Q_OBJECT

public:
    DescribeEnvironmentStatusResponse(const DescribeEnvironmentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentStatusResponse)
    Q_DISABLE_COPY(DescribeEnvironmentStatusResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
