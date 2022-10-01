// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRESOURCECONFIGREQUEST_H
#define QTAWS_BATCHGETRESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT BatchGetResourceConfigRequest : public ConfigServiceRequest {

public:
    BatchGetResourceConfigRequest(const BatchGetResourceConfigRequest &other);
    BatchGetResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
