// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTRESPONSE_H
#define QTAWS_DESCRIBEPROJECTRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeprojectrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeProjectResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeProjectResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeProjectResponse(const DescribeProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectResponse)
    Q_DISABLE_COPY(DescribeProjectResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
