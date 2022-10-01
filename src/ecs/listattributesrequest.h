// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTESREQUEST_H
#define QTAWS_LISTATTRIBUTESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class ListAttributesRequestPrivate;

class QTAWSECS_EXPORT ListAttributesRequest : public EcsRequest {

public:
    ListAttributesRequest(const ListAttributesRequest &other);
    ListAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
