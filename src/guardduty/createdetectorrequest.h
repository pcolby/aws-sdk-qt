// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORREQUEST_H
#define QTAWS_CREATEDETECTORREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateDetectorRequestPrivate;

class QTAWSGUARDDUTY_EXPORT CreateDetectorRequest : public GuardDutyRequest {

public:
    CreateDetectorRequest(const CreateDetectorRequest &other);
    CreateDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
