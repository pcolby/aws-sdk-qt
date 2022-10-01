// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMESSAGESREQUEST_H
#define QTAWS_LISTCHANNELMESSAGESREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListChannelMessagesRequestPrivate;

class QTAWSCHIME_EXPORT ListChannelMessagesRequest : public ChimeRequest {

public:
    ListChannelMessagesRequest(const ListChannelMessagesRequest &other);
    ListChannelMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMessagesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
