// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRUNREQUEST_H
#define QTAWS_GETRUNREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRunRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetRunRequest : public DeviceFarmRequest {

public:
    GetRunRequest(const GetRunRequest &other);
    GetRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
