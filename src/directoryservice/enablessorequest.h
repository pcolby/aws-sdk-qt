// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESSOREQUEST_H
#define QTAWS_ENABLESSOREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableSsoRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableSsoRequest : public DirectoryServiceRequest {

public:
    EnableSsoRequest(const EnableSsoRequest &other);
    EnableSsoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSsoRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
