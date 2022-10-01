// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONDITIONALFORWARDERREQUEST_H
#define QTAWS_CREATECONDITIONALFORWARDERREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateConditionalForwarderRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateConditionalForwarderRequest : public DirectoryServiceRequest {

public:
    CreateConditionalForwarderRequest(const CreateConditionalForwarderRequest &other);
    CreateConditionalForwarderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
