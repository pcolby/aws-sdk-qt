// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESETTINGSREQUEST_H
#define QTAWS_UPDATESETTINGSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateSettingsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateSettingsRequest : public DirectoryServiceRequest {

public:
    UpdateSettingsRequest(const UpdateSettingsRequest &other);
    UpdateSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
