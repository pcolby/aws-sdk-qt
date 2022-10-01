// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYTYPESREQUEST_H
#define QTAWS_GETENTITYTYPESREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEntityTypesRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEntityTypesRequest : public FraudDetectorRequest {

public:
    GetEntityTypesRequest(const GetEntityTypesRequest &other);
    GetEntityTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntityTypesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
