// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_H

#include "cloud9response.h"
#include "describeenvironmentmembershipsrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentMembershipsResponsePrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentMembershipsResponse : public Cloud9Response {
    Q_OBJECT

public:
    DescribeEnvironmentMembershipsResponse(const DescribeEnvironmentMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentMembershipsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentMembershipsResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
