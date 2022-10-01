// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESPECIFICCREDENTIALSREQUEST_H
#define QTAWS_LISTSERVICESPECIFICCREDENTIALSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListServiceSpecificCredentialsRequestPrivate;

class QTAWSIAM_EXPORT ListServiceSpecificCredentialsRequest : public IamRequest {

public:
    ListServiceSpecificCredentialsRequest(const ListServiceSpecificCredentialsRequest &other);
    ListServiceSpecificCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceSpecificCredentialsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
