// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSOURCEMAPPINGREQUEST_H
#define QTAWS_DELETEEVENTSOURCEMAPPINGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteEventSourceMappingRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteEventSourceMappingRequest : public LambdaRequest {

public:
    DeleteEventSourceMappingRequest(const DeleteEventSourceMappingRequest &other);
    DeleteEventSourceMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
