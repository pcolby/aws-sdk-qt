// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPMONITORREQUEST_H
#define QTAWS_CREATEAPPMONITORREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class CreateAppMonitorRequestPrivate;

class QTAWSRUM_EXPORT CreateAppMonitorRequest : public RumRequest {

public:
    CreateAppMonitorRequest(const CreateAppMonitorRequest &other);
    CreateAppMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
