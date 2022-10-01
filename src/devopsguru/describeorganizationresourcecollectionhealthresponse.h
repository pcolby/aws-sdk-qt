// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHRESPONSE_H

#include "devopsgururesponse.h"
#include "describeorganizationresourcecollectionhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationResourceCollectionHealthResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeOrganizationResourceCollectionHealthResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeOrganizationResourceCollectionHealthResponse(const DescribeOrganizationResourceCollectionHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationResourceCollectionHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationResourceCollectionHealthResponse)
    Q_DISABLE_COPY(DescribeOrganizationResourceCollectionHealthResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
