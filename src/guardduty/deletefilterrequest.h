// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_H
#define QTAWS_DELETEFILTERREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteFilterRequestPrivate;

class QTAWSGUARDDUTY_EXPORT DeleteFilterRequest : public GuardDutyRequest {

public:
    DeleteFilterRequest(const DeleteFilterRequest &other);
    DeleteFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
