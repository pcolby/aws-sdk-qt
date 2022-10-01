// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERREQUEST_H
#define QTAWS_GETUSERREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetUserRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetUserRequest : public FinspaceDataRequest {

public:
    GetUserRequest(const GetUserRequest &other);
    GetUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
