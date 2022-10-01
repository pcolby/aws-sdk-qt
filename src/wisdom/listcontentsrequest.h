// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTENTSREQUEST_H
#define QTAWS_LISTCONTENTSREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class ListContentsRequestPrivate;

class QTAWSWISDOM_EXPORT ListContentsRequest : public WisdomRequest {

public:
    ListContentsRequest(const ListContentsRequest &other);
    ListContentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContentsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
