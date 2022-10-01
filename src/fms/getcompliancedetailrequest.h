// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILREQUEST_H
#define QTAWS_GETCOMPLIANCEDETAILREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetComplianceDetailRequestPrivate;

class QTAWSFMS_EXPORT GetComplianceDetailRequest : public FmsRequest {

public:
    GetComplianceDetailRequest(const GetComplianceDetailRequest &other);
    GetComplianceDetailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
