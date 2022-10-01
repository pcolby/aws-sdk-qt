// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHREQUEST_H
#define QTAWS_PUBLISHREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class PublishRequestPrivate;

class QTAWSSNS_EXPORT PublishRequest : public SnsRequest {

public:
    PublishRequest(const PublishRequest &other);
    PublishRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
