// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPMONITORREQUEST_H
#define QTAWS_DELETEAPPMONITORREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class DeleteAppMonitorRequestPrivate;

class QTAWSRUM_EXPORT DeleteAppMonitorRequest : public RumRequest {

public:
    DeleteAppMonitorRequest(const DeleteAppMonitorRequest &other);
    DeleteAppMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
