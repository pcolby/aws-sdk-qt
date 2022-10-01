// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLERSREQUEST_H
#define QTAWS_LISTCRAWLERSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlersRequestPrivate;

class QTAWSGLUE_EXPORT ListCrawlersRequest : public GlueRequest {

public:
    ListCrawlersRequest(const ListCrawlersRequest &other);
    ListCrawlersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrawlersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
