// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListTagsForResourceRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListTagsForResourceRequest : public ResilienceHubRequest {

public:
    ListTagsForResourceRequest(const ListTagsForResourceRequest &other);
    ListTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
