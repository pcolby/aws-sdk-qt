// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHREATINTELSETREQUEST_H
#define QTAWS_DELETETHREATINTELSETREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteThreatIntelSetRequestPrivate;

class QTAWSGUARDDUTY_EXPORT DeleteThreatIntelSetRequest : public GuardDutyRequest {

public:
    DeleteThreatIntelSetRequest(const DeleteThreatIntelSetRequest &other);
    DeleteThreatIntelSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThreatIntelSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
