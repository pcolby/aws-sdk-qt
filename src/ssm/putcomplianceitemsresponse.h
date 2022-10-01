// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPLIANCEITEMSRESPONSE_H
#define QTAWS_PUTCOMPLIANCEITEMSRESPONSE_H

#include "ssmresponse.h"
#include "putcomplianceitemsrequest.h"

namespace QtAws {
namespace Ssm {

class PutComplianceItemsResponsePrivate;

class QTAWSSSM_EXPORT PutComplianceItemsResponse : public SsmResponse {
    Q_OBJECT

public:
    PutComplianceItemsResponse(const PutComplianceItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutComplianceItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutComplianceItemsResponse)
    Q_DISABLE_COPY(PutComplianceItemsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
