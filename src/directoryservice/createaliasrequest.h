// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASREQUEST_H
#define QTAWS_CREATEALIASREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateAliasRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateAliasRequest : public DirectoryServiceRequest {

public:
    CreateAliasRequest(const CreateAliasRequest &other);
    CreateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAliasRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
