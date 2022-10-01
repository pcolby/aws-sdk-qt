// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREIMAGETASKSRESPONSE_H
#define QTAWS_DESCRIBESTOREIMAGETASKSRESPONSE_H

#include "ec2response.h"
#include "describestoreimagetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeStoreImageTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeStoreImageTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeStoreImageTasksResponse(const DescribeStoreImageTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStoreImageTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStoreImageTasksResponse)
    Q_DISABLE_COPY(DescribeStoreImageTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
