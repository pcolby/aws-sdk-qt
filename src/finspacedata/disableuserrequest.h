// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERREQUEST_H
#define QTAWS_DISABLEUSERREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class DisableUserRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT DisableUserRequest : public FinspaceDataRequest {

public:
    DisableUserRequest(const DisableUserRequest &other);
    DisableUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
