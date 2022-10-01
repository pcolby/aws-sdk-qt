// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHREATINTELSETSREQUEST_H
#define QTAWS_LISTTHREATINTELSETSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListThreatIntelSetsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT ListThreatIntelSetsRequest : public GuardDutyRequest {

public:
    ListThreatIntelSetsRequest(const ListThreatIntelSetsRequest &other);
    ListThreatIntelSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThreatIntelSetsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
