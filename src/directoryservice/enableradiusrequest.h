// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERADIUSREQUEST_H
#define QTAWS_ENABLERADIUSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableRadiusRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableRadiusRequest : public DirectoryServiceRequest {

public:
    EnableRadiusRequest(const EnableRadiusRequest &other);
    EnableRadiusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableRadiusRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
