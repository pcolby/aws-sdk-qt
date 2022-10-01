// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTYPESREQUEST_H
#define QTAWS_LISTEVENTTYPESREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListEventTypesRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT ListEventTypesRequest : public CodestarNotificationsRequest {

public:
    ListEventTypesRequest(const ListEventTypesRequest &other);
    ListEventTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventTypesRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
