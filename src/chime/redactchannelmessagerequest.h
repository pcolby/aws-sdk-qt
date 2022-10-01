// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGEREQUEST_H
#define QTAWS_REDACTCHANNELMESSAGEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class RedactChannelMessageRequestPrivate;

class QTAWSCHIME_EXPORT RedactChannelMessageRequest : public ChimeRequest {

public:
    RedactChannelMessageRequest(const RedactChannelMessageRequest &other);
    RedactChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
