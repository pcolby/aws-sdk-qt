// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPRESPONSE_H
#define QTAWS_DESCRIBEDATASETGROUPRESPONSE_H

#include "personalizeresponse.h"
#include "describedatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetGroupResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetGroupResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeDatasetGroupResponse(const DescribeDatasetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatasetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetGroupResponse)
    Q_DISABLE_COPY(DescribeDatasetGroupResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
