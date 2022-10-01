// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYTRUSTREQUEST_H
#define QTAWS_VERIFYTRUSTREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class VerifyTrustRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT VerifyTrustRequest : public DirectoryServiceRequest {

public:
    VerifyTrustRequest(const VerifyTrustRequest &other);
    VerifyTrustRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
