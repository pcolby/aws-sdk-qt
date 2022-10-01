// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESREQUEST_H
#define QTAWS_LISTINSTANCEPROFILESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesRequestPrivate;

class QTAWSIAM_EXPORT ListInstanceProfilesRequest : public IamRequest {

public:
    ListInstanceProfilesRequest(const ListInstanceProfilesRequest &other);
    ListInstanceProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfilesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
