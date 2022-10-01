// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILETAGSREQUEST_H
#define QTAWS_LISTINSTANCEPROFILETAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfileTagsRequestPrivate;

class QTAWSIAM_EXPORT ListInstanceProfileTagsRequest : public IamRequest {

public:
    ListInstanceProfileTagsRequest(const ListInstanceProfileTagsRequest &other);
    ListInstanceProfileTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfileTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
