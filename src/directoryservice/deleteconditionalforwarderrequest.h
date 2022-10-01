// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONDITIONALFORWARDERREQUEST_H
#define QTAWS_DELETECONDITIONALFORWARDERREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteConditionalForwarderRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteConditionalForwarderRequest : public DirectoryServiceRequest {

public:
    DeleteConditionalForwarderRequest(const DeleteConditionalForwarderRequest &other);
    DeleteConditionalForwarderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
