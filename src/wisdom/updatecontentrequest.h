// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTENTREQUEST_H
#define QTAWS_UPDATECONTENTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateContentRequestPrivate;

class QTAWSWISDOM_EXPORT UpdateContentRequest : public WisdomRequest {

public:
    UpdateContentRequest(const UpdateContentRequest &other);
    UpdateContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
