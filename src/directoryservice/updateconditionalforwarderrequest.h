// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONDITIONALFORWARDERREQUEST_H
#define QTAWS_UPDATECONDITIONALFORWARDERREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateConditionalForwarderRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateConditionalForwarderRequest : public DirectoryServiceRequest {

public:
    UpdateConditionalForwarderRequest(const UpdateConditionalForwarderRequest &other);
    UpdateConditionalForwarderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
