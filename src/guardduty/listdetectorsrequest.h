// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSREQUEST_H
#define QTAWS_LISTDETECTORSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListDetectorsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT ListDetectorsRequest : public GuardDutyRequest {

public:
    ListDetectorsRequest(const ListDetectorsRequest &other);
    ListDetectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectorsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
