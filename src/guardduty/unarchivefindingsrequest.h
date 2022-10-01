// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNARCHIVEFINDINGSREQUEST_H
#define QTAWS_UNARCHIVEFINDINGSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class UnarchiveFindingsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT UnarchiveFindingsRequest : public GuardDutyRequest {

public:
    UnarchiveFindingsRequest(const UnarchiveFindingsRequest &other);
    UnarchiveFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnarchiveFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
