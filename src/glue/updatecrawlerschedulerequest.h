// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERSCHEDULEREQUEST_H
#define QTAWS_UPDATECRAWLERSCHEDULEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerScheduleRequestPrivate;

class QTAWSGLUE_EXPORT UpdateCrawlerScheduleRequest : public GlueRequest {

public:
    UpdateCrawlerScheduleRequest(const UpdateCrawlerScheduleRequest &other);
    UpdateCrawlerScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
