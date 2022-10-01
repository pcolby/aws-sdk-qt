// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPSLISTREQUEST_H
#define QTAWS_DELETEAPPSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class DeleteAppsListRequestPrivate;

class QTAWSFMS_EXPORT DeleteAppsListRequest : public FmsRequest {

public:
    DeleteAppsListRequest(const DeleteAppsListRequest &other);
    DeleteAppsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
