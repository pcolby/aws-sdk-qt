// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPROUTESREQUEST_H
#define QTAWS_LISTIPROUTESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ListIpRoutesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListIpRoutesRequest : public DirectoryServiceRequest {

public:
    ListIpRoutesRequest(const ListIpRoutesRequest &other);
    ListIpRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIpRoutesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
