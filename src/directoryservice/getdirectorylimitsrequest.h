// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYLIMITSREQUEST_H
#define QTAWS_GETDIRECTORYLIMITSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class GetDirectoryLimitsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT GetDirectoryLimitsRequest : public DirectoryServiceRequest {

public:
    GetDirectoryLimitsRequest(const GetDirectoryLimitsRequest &other);
    GetDirectoryLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDirectoryLimitsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
