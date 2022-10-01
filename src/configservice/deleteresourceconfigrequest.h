// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCECONFIGREQUEST_H
#define QTAWS_DELETERESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteResourceConfigRequest : public ConfigServiceRequest {

public:
    DeleteResourceConfigRequest(const DeleteResourceConfigRequest &other);
    DeleteResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
