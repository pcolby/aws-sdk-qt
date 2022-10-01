// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERREQUEST_H
#define QTAWS_UPDATECRAWLERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerRequestPrivate;

class QTAWSGLUE_EXPORT UpdateCrawlerRequest : public GlueRequest {

public:
    UpdateCrawlerRequest(const UpdateCrawlerRequest &other);
    UpdateCrawlerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
