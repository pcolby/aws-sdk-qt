// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILRESPONSE_H
#define QTAWS_GETCOMPLIANCEDETAILRESPONSE_H

#include "fmsresponse.h"
#include "getcompliancedetailrequest.h"

namespace QtAws {
namespace Fms {

class GetComplianceDetailResponsePrivate;

class QTAWSFMS_EXPORT GetComplianceDetailResponse : public FmsResponse {
    Q_OBJECT

public:
    GetComplianceDetailResponse(const GetComplianceDetailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceDetailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailResponse)
    Q_DISABLE_COPY(GetComplianceDetailResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
