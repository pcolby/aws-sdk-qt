// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERREQUEST_H
#define QTAWS_STARTCRAWLERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerRequestPrivate;

class QTAWSGLUE_EXPORT StartCrawlerRequest : public GlueRequest {

public:
    StartCrawlerRequest(const StartCrawlerRequest &other);
    StartCrawlerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
