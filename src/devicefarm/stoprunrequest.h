// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRUNREQUEST_H
#define QTAWS_STOPRUNREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRunRequestPrivate;

class QTAWSDEVICEFARM_EXPORT StopRunRequest : public DeviceFarmRequest {

public:
    StopRunRequest(const StopRunRequest &other);
    StopRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
