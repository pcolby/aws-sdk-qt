// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSETTINGSREQUEST_H
#define QTAWS_LISTACCOUNTSETTINGSREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class ListAccountSettingsRequestPrivate;

class QTAWSECS_EXPORT ListAccountSettingsRequest : public EcsRequest {

public:
    ListAccountSettingsRequest(const ListAccountSettingsRequest &other);
    ListAccountSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountSettingsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
