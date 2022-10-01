// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMICROSOFTADREQUEST_H
#define QTAWS_CREATEMICROSOFTADREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateMicrosoftADRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateMicrosoftADRequest : public DirectoryServiceRequest {

public:
    CreateMicrosoftADRequest(const CreateMicrosoftADRequest &other);
    CreateMicrosoftADRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMicrosoftADRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
