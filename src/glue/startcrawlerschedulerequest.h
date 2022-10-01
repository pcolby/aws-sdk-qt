// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERSCHEDULEREQUEST_H
#define QTAWS_STARTCRAWLERSCHEDULEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerScheduleRequestPrivate;

class QTAWSGLUE_EXPORT StartCrawlerScheduleRequest : public GlueRequest {

public:
    StartCrawlerScheduleRequest(const StartCrawlerScheduleRequest &other);
    StartCrawlerScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
