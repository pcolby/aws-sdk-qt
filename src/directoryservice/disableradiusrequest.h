// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERADIUSREQUEST_H
#define QTAWS_DISABLERADIUSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableRadiusRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableRadiusRequest : public DirectoryServiceRequest {

public:
    DisableRadiusRequest(const DisableRadiusRequest &other);
    DisableRadiusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRadiusRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
