// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORDATAREQUEST_H
#define QTAWS_GETAPPMONITORDATAREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorDataRequestPrivate;

class QTAWSRUM_EXPORT GetAppMonitorDataRequest : public RumRequest {

public:
    GetAppMonitorDataRequest(const GetAppMonitorDataRequest &other);
    GetAppMonitorDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppMonitorDataRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
