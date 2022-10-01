// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTTYPESREQUEST_H
#define QTAWS_GETEVENTTYPESREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventTypesRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventTypesRequest : public FraudDetectorRequest {

public:
    GetEventTypesRequest(const GetEventTypesRequest &other);
    GetEventTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventTypesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
