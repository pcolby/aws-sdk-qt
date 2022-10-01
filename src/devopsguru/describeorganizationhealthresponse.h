// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONHEALTHRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONHEALTHRESPONSE_H

#include "devopsgururesponse.h"
#include "describeorganizationhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationHealthResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeOrganizationHealthResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeOrganizationHealthResponse(const DescribeOrganizationHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationHealthResponse)
    Q_DISABLE_COPY(DescribeOrganizationHealthResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
