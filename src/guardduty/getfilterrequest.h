// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILTERREQUEST_H
#define QTAWS_GETFILTERREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFilterRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetFilterRequest : public GuardDutyRequest {

public:
    GetFilterRequest(const GetFilterRequest &other);
    GetFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
