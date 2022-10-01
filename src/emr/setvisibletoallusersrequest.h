// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVISIBLETOALLUSERSREQUEST_H
#define QTAWS_SETVISIBLETOALLUSERSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class SetVisibleToAllUsersRequestPrivate;

class QTAWSEMR_EXPORT SetVisibleToAllUsersRequest : public EmrRequest {

public:
    SetVisibleToAllUsersRequest(const SetVisibleToAllUsersRequest &other);
    SetVisibleToAllUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVisibleToAllUsersRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
