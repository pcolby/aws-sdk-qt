// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEPROFILEREQUEST_H
#define QTAWS_CREATEINSTANCEPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateInstanceProfileRequestPrivate;

class QTAWSIAM_EXPORT CreateInstanceProfileRequest : public IamRequest {

public:
    CreateInstanceProfileRequest(const CreateInstanceProfileRequest &other);
    CreateInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
