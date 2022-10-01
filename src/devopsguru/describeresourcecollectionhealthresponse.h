// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHRESPONSE_H
#define QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHRESPONSE_H

#include "devopsgururesponse.h"
#include "describeresourcecollectionhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeResourceCollectionHealthResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeResourceCollectionHealthResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeResourceCollectionHealthResponse(const DescribeResourceCollectionHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourceCollectionHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceCollectionHealthResponse)
    Q_DISABLE_COPY(DescribeResourceCollectionHealthResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
