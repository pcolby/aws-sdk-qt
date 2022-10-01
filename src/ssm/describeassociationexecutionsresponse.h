// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeassociationexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeAssociationExecutionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAssociationExecutionsResponse(const DescribeAssociationExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssociationExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssociationExecutionsResponse)
    Q_DISABLE_COPY(DescribeAssociationExecutionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
