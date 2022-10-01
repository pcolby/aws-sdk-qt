// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEIPROUTESREQUEST_H
#define QTAWS_REMOVEIPROUTESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class RemoveIpRoutesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RemoveIpRoutesRequest : public DirectoryServiceRequest {

public:
    RemoveIpRoutesRequest(const RemoveIpRoutesRequest &other);
    RemoveIpRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveIpRoutesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
