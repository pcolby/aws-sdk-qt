// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSREQUEST_H
#define QTAWS_LISTTARGETSREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListTargetsRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT ListTargetsRequest : public CodestarNotificationsRequest {

public:
    ListTargetsRequest(const ListTargetsRequest &other);
    ListTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
