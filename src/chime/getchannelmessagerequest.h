// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGEREQUEST_H
#define QTAWS_GETCHANNELMESSAGEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetChannelMessageRequestPrivate;

class QTAWSCHIME_EXPORT GetChannelMessageRequest : public ChimeRequest {

public:
    GetChannelMessageRequest(const GetChannelMessageRequest &other);
    GetChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
