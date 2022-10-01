// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERSCHEDULEREQUEST_H
#define QTAWS_STOPCRAWLERSCHEDULEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerScheduleRequestPrivate;

class QTAWSGLUE_EXPORT StopCrawlerScheduleRequest : public GlueRequest {

public:
    StopCrawlerScheduleRequest(const StopCrawlerScheduleRequest &other);
    StopCrawlerScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
