// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_H
#define QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_H

#include "opsworksresponse.h"
#include "describeoperatingsystemsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeOperatingSystemsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeOperatingSystemsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeOperatingSystemsResponse(const DescribeOperatingSystemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOperatingSystemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOperatingSystemsResponse)
    Q_DISABLE_COPY(DescribeOperatingSystemsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
