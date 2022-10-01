// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGSUBSCRIPTIONSREQUEST_H
#define QTAWS_LISTLOGSUBSCRIPTIONSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ListLogSubscriptionsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListLogSubscriptionsRequest : public DirectoryServiceRequest {

public:
    ListLogSubscriptionsRequest(const ListLogSubscriptionsRequest &other);
    ListLogSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogSubscriptionsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
