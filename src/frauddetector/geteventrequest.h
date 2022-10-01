// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTREQUEST_H
#define QTAWS_GETEVENTREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventRequest : public FraudDetectorRequest {

public:
    GetEventRequest(const GetEventRequest &other);
    GetEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
