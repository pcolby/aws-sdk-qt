// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPMONITORREQUEST_H
#define QTAWS_UPDATEAPPMONITORREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class UpdateAppMonitorRequestPrivate;

class QTAWSRUM_EXPORT UpdateAppMonitorRequest : public RumRequest {

public:
    UpdateAppMonitorRequest(const UpdateAppMonitorRequest &other);
    UpdateAppMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
