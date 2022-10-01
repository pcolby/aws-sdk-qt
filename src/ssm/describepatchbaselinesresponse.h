// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHBASELINESRESPONSE_H
#define QTAWS_DESCRIBEPATCHBASELINESRESPONSE_H

#include "ssmresponse.h"
#include "describepatchbaselinesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchBaselinesResponsePrivate;

class QTAWSSSM_EXPORT DescribePatchBaselinesResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribePatchBaselinesResponse(const DescribePatchBaselinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePatchBaselinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchBaselinesResponse)
    Q_DISABLE_COPY(DescribePatchBaselinesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
