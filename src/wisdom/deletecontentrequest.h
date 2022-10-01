// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTENTREQUEST_H
#define QTAWS_DELETECONTENTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteContentRequestPrivate;

class QTAWSWISDOM_EXPORT DeleteContentRequest : public WisdomRequest {

public:
    DeleteContentRequest(const DeleteContentRequest &other);
    DeleteContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
