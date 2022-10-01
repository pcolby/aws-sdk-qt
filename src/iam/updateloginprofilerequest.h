// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGINPROFILEREQUEST_H
#define QTAWS_UPDATELOGINPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateLoginProfileRequestPrivate;

class QTAWSIAM_EXPORT UpdateLoginProfileRequest : public IamRequest {

public:
    UpdateLoginProfileRequest(const UpdateLoginProfileRequest &other);
    UpdateLoginProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
