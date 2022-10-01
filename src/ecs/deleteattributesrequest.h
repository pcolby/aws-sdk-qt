// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTESREQUEST_H
#define QTAWS_DELETEATTRIBUTESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteAttributesRequestPrivate;

class QTAWSECS_EXPORT DeleteAttributesRequest : public EcsRequest {

public:
    DeleteAttributesRequest(const DeleteAttributesRequest &other);
    DeleteAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
