// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERBYPRINCIPALIDREQUEST_H
#define QTAWS_DELETEUSERBYPRINCIPALIDREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteUserByPrincipalIdRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteUserByPrincipalIdRequest : public QuickSightRequest {

public:
    DeleteUserByPrincipalIdRequest(const DeleteUserByPrincipalIdRequest &other);
    DeleteUserByPrincipalIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserByPrincipalIdRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
