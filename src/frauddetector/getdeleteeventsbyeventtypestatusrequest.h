// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSREQUEST_H
#define QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDeleteEventsByEventTypeStatusRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDeleteEventsByEventTypeStatusRequest : public FraudDetectorRequest {

public:
    GetDeleteEventsByEventTypeStatusRequest(const GetDeleteEventsByEventTypeStatusRequest &other);
    GetDeleteEventsByEventTypeStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeleteEventsByEventTypeStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
