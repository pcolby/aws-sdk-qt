// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSTATERESPONSE_H
#define QTAWS_DESCRIBEPATCHGROUPSTATERESPONSE_H

#include "ssmresponse.h"
#include "describepatchgroupstaterequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupStateResponsePrivate;

class QTAWSSSM_EXPORT DescribePatchGroupStateResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribePatchGroupStateResponse(const DescribePatchGroupStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePatchGroupStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchGroupStateResponse)
    Q_DISABLE_COPY(DescribePatchGroupStateResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
