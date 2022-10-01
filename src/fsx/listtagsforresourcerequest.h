// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class ListTagsForResourceRequestPrivate;

class QTAWSFSX_EXPORT ListTagsForResourceRequest : public FSxRequest {

public:
    ListTagsForResourceRequest(const ListTagsForResourceRequest &other);
    ListTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
