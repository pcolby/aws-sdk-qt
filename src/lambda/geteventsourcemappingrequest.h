// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSOURCEMAPPINGREQUEST_H
#define QTAWS_GETEVENTSOURCEMAPPINGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetEventSourceMappingRequestPrivate;

class QTAWSLAMBDA_EXPORT GetEventSourceMappingRequest : public LambdaRequest {

public:
    GetEventSourceMappingRequest(const GetEventSourceMappingRequest &other);
    GetEventSourceMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
