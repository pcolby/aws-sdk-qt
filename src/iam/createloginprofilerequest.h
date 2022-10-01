// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGINPROFILEREQUEST_H
#define QTAWS_CREATELOGINPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateLoginProfileRequestPrivate;

class QTAWSIAM_EXPORT CreateLoginProfileRequest : public IamRequest {

public:
    CreateLoginProfileRequest(const CreateLoginProfileRequest &other);
    CreateLoginProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
