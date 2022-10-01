// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESSOREQUEST_H
#define QTAWS_DISABLESSOREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableSsoRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableSsoRequest : public DirectoryServiceRequest {

public:
    DisableSsoRequest(const DisableSsoRequest &other);
    DisableSsoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSsoRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
