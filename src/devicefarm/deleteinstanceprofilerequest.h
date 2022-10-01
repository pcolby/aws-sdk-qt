// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEPROFILEREQUEST_H
#define QTAWS_DELETEINSTANCEPROFILEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteInstanceProfileRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteInstanceProfileRequest : public DeviceFarmRequest {

public:
    DeleteInstanceProfileRequest(const DeleteInstanceProfileRequest &other);
    DeleteInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
