// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERTAGSREQUEST_H
#define QTAWS_LISTUSERTAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListUserTagsRequestPrivate;

class QTAWSIAM_EXPORT ListUserTagsRequest : public IamRequest {

public:
    ListUserTagsRequest(const ListUserTagsRequest &other);
    ListUserTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
