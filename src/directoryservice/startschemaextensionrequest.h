// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMAEXTENSIONREQUEST_H
#define QTAWS_STARTSCHEMAEXTENSIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class StartSchemaExtensionRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT StartSchemaExtensionRequest : public DirectoryServiceRequest {

public:
    StartSchemaExtensionRequest(const StartSchemaExtensionRequest &other);
    StartSchemaExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSchemaExtensionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
