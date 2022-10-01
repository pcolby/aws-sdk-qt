// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPERESPONSE_H
#define QTAWS_DESCRIBETYPERESPONSE_H

#include "cloudformationresponse.h"
#include "describetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeTypeResponse(const DescribeTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTypeResponse)
    Q_DISABLE_COPY(DescribeTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
