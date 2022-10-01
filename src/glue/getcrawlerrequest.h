// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERREQUEST_H
#define QTAWS_GETCRAWLERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlerRequestPrivate;

class QTAWSGLUE_EXPORT GetCrawlerRequest : public GlueRequest {

public:
    GetCrawlerRequest(const GetCrawlerRequest &other);
    GetCrawlerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
