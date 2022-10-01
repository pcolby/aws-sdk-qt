// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABLEPATCHESRESPONSE_H
#define QTAWS_DESCRIBEAVAILABLEPATCHESRESPONSE_H

#include "ssmresponse.h"
#include "describeavailablepatchesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAvailablePatchesResponsePrivate;

class QTAWSSSM_EXPORT DescribeAvailablePatchesResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAvailablePatchesResponse(const DescribeAvailablePatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAvailablePatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailablePatchesResponse)
    Q_DISABLE_COPY(DescribeAvailablePatchesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
