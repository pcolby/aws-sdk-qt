// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_H
#define QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class CreateEventSourceMappingRequestPrivate;

class QTAWSLAMBDA_EXPORT CreateEventSourceMappingRequest : public LambdaRequest {

public:
    CreateEventSourceMappingRequest(const CreateEventSourceMappingRequest &other);
    CreateEventSourceMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
