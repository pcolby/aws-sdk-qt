// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHPROPERTIESRESPONSE_H
#define QTAWS_DESCRIBEPATCHPROPERTIESRESPONSE_H

#include "ssmresponse.h"
#include "describepatchpropertiesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchPropertiesResponsePrivate;

class QTAWSSSM_EXPORT DescribePatchPropertiesResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribePatchPropertiesResponse(const DescribePatchPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePatchPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchPropertiesResponse)
    Q_DISABLE_COPY(DescribePatchPropertiesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
