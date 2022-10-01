// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTATTRIBUTESREQUEST_H
#define QTAWS_PUTATTRIBUTESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class PutAttributesRequestPrivate;

class QTAWSECS_EXPORT PutAttributesRequest : public EcsRequest {

public:
    PutAttributesRequest(const PutAttributesRequest &other);
    PutAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
