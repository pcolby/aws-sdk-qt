// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSRESPONSE_H
#define QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSRESPONSE_H

#include "ec2response.h"
#include "describereplacerootvolumetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReplaceRootVolumeTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeReplaceRootVolumeTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeReplaceRootVolumeTasksResponse(const DescribeReplaceRootVolumeTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplaceRootVolumeTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplaceRootVolumeTasksResponse)
    Q_DISABLE_COPY(DescribeReplaceRootVolumeTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
