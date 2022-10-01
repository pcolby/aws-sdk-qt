// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEPERMISSIONSRESPONSE_H

#include "opsworksresponse.h"
#include "describepermissionsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribePermissionsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribePermissionsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribePermissionsResponse(const DescribePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePermissionsResponse)
    Q_DISABLE_COPY(DescribePermissionsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
