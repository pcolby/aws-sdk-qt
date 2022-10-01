// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGINPROFILEREQUEST_H
#define QTAWS_GETLOGINPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetLoginProfileRequestPrivate;

class QTAWSIAM_EXPORT GetLoginProfileRequest : public IamRequest {

public:
    GetLoginProfileRequest(const GetLoginProfileRequest &other);
    GetLoginProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
