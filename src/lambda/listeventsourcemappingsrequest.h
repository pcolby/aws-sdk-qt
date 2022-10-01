// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCEMAPPINGSREQUEST_H
#define QTAWS_LISTEVENTSOURCEMAPPINGSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListEventSourceMappingsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListEventSourceMappingsRequest : public LambdaRequest {

public:
    ListEventSourceMappingsRequest(const ListEventSourceMappingsRequest &other);
    ListEventSourceMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourceMappingsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
