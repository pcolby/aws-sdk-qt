// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCERESPONSE_H
#define QTAWS_DESCRIBERESOURCERESPONSE_H

#include "lakeformationresponse.h"
#include "describeresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeResourceResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DescribeResourceResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DescribeResourceResponse(const DescribeResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceResponse)
    Q_DISABLE_COPY(DescribeResourceResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
