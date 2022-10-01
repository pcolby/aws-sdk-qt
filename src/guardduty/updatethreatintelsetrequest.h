// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHREATINTELSETREQUEST_H
#define QTAWS_UPDATETHREATINTELSETREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateThreatIntelSetRequestPrivate;

class QTAWSGUARDDUTY_EXPORT UpdateThreatIntelSetRequest : public GuardDutyRequest {

public:
    UpdateThreatIntelSetRequest(const UpdateThreatIntelSetRequest &other);
    UpdateThreatIntelSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
