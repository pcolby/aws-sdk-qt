// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERUNREQUEST_H
#define QTAWS_DELETERUNREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRunRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteRunRequest : public DeviceFarmRequest {

public:
    DeleteRunRequest(const DeleteRunRequest &other);
    DeleteRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
