// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_H
#define QTAWS_CREATEFILTERREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateFilterRequestPrivate;

class QTAWSGUARDDUTY_EXPORT CreateFilterRequest : public GuardDutyRequest {

public:
    CreateFilterRequest(const CreateFilterRequest &other);
    CreateFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
