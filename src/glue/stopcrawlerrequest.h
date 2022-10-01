// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERREQUEST_H
#define QTAWS_STOPCRAWLERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerRequestPrivate;

class QTAWSGLUE_EXPORT StopCrawlerRequest : public GlueRequest {

public:
    StopCrawlerRequest(const StopCrawlerRequest &other);
    StopCrawlerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
