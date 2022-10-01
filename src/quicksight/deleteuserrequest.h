// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_H
#define QTAWS_DELETEUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteUserRequest : public QuickSightRequest {

public:
    DeleteUserRequest(const DeleteUserRequest &other);
    DeleteUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
