// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_H
#define QTAWS_UPDATEUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateUserRequest : public QuickSightRequest {

public:
    UpdateUserRequest(const UpdateUserRequest &other);
    UpdateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
