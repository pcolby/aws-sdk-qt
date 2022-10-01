// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIOLATIONDETAILSREQUEST_H
#define QTAWS_GETVIOLATIONDETAILSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetViolationDetailsRequestPrivate;

class QTAWSFMS_EXPORT GetViolationDetailsRequest : public FmsRequest {

public:
    GetViolationDetailsRequest(const GetViolationDetailsRequest &other);
    GetViolationDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetViolationDetailsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
