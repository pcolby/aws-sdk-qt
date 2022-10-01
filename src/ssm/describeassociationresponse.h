// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONRESPONSE_H
#define QTAWS_DESCRIBEASSOCIATIONRESPONSE_H

#include "ssmresponse.h"
#include "describeassociationrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationResponsePrivate;

class QTAWSSSM_EXPORT DescribeAssociationResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAssociationResponse(const DescribeAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssociationResponse)
    Q_DISABLE_COPY(DescribeAssociationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
