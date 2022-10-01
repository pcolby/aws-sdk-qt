// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTREQUEST_H
#define QTAWS_GETCONTENTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentRequestPrivate;

class QTAWSWISDOM_EXPORT GetContentRequest : public WisdomRequest {

public:
    GetContentRequest(const GetContentRequest &other);
    GetContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
