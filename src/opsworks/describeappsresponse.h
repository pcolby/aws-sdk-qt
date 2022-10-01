// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPSRESPONSE_H
#define QTAWS_DESCRIBEAPPSRESPONSE_H

#include "opsworksresponse.h"
#include "describeappsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAppsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeAppsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeAppsResponse(const DescribeAppsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppsResponse)
    Q_DISABLE_COPY(DescribeAppsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
