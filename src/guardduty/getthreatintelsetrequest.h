// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHREATINTELSETREQUEST_H
#define QTAWS_GETTHREATINTELSETREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetThreatIntelSetRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetThreatIntelSetRequest : public GuardDutyRequest {

public:
    GetThreatIntelSetRequest(const GetThreatIntelSetRequest &other);
    GetThreatIntelSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
