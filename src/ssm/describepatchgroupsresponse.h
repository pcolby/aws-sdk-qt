// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSRESPONSE_H
#define QTAWS_DESCRIBEPATCHGROUPSRESPONSE_H

#include "ssmresponse.h"
#include "describepatchgroupsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupsResponsePrivate;

class QTAWSSSM_EXPORT DescribePatchGroupsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribePatchGroupsResponse(const DescribePatchGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePatchGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchGroupsResponse)
    Q_DISABLE_COPY(DescribePatchGroupsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
