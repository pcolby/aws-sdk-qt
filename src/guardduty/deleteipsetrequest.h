// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETREQUEST_H
#define QTAWS_DELETEIPSETREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteIPSetRequestPrivate;

class QTAWSGUARDDUTY_EXPORT DeleteIPSetRequest : public GuardDutyRequest {

public:
    DeleteIPSetRequest(const DeleteIPSetRequest &other);
    DeleteIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIPSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
