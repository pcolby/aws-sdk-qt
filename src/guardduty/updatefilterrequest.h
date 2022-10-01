// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILTERREQUEST_H
#define QTAWS_UPDATEFILTERREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateFilterRequestPrivate;

class QTAWSGUARDDUTY_EXPORT UpdateFilterRequest : public GuardDutyRequest {

public:
    UpdateFilterRequest(const UpdateFilterRequest &other);
    UpdateFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
