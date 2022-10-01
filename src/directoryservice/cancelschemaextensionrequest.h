// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSCHEMAEXTENSIONREQUEST_H
#define QTAWS_CANCELSCHEMAEXTENSIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CancelSchemaExtensionRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CancelSchemaExtensionRequest : public DirectoryServiceRequest {

public:
    CancelSchemaExtensionRequest(const CancelSchemaExtensionRequest &other);
    CancelSchemaExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSchemaExtensionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
