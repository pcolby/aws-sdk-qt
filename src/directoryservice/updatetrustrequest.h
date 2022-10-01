// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTREQUEST_H
#define QTAWS_UPDATETRUSTREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateTrustRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateTrustRequest : public DirectoryServiceRequest {

public:
    UpdateTrustRequest(const UpdateTrustRequest &other);
    UpdateTrustRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
