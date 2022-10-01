// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORREQUEST_H
#define QTAWS_DELETEDETECTORREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteDetectorRequestPrivate;

class QTAWSGUARDDUTY_EXPORT DeleteDetectorRequest : public GuardDutyRequest {

public:
    DeleteDetectorRequest(const DeleteDetectorRequest &other);
    DeleteDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
