// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGINPROFILEREQUEST_H
#define QTAWS_DELETELOGINPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteLoginProfileRequestPrivate;

class QTAWSIAM_EXPORT DeleteLoginProfileRequest : public IamRequest {

public:
    DeleteLoginProfileRequest(const DeleteLoginProfileRequest &other);
    DeleteLoginProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
