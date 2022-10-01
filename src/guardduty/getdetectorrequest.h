// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORREQUEST_H
#define QTAWS_GETDETECTORREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetDetectorRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetDetectorRequest : public GuardDutyRequest {

public:
    GetDetectorRequest(const GetDetectorRequest &other);
    GetDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
