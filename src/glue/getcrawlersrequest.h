// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERSREQUEST_H
#define QTAWS_GETCRAWLERSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlersRequestPrivate;

class QTAWSGLUE_EXPORT GetCrawlersRequest : public GlueRequest {

public:
    GetCrawlersRequest(const GetCrawlersRequest &other);
    GetCrawlersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrawlersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
