// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTENTREQUEST_H
#define QTAWS_CREATECONTENTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateContentRequestPrivate;

class QTAWSWISDOM_EXPORT CreateContentRequest : public WisdomRequest {

public:
    CreateContentRequest(const CreateContentRequest &other);
    CreateContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
