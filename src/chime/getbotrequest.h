// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTREQUEST_H
#define QTAWS_GETBOTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetBotRequestPrivate;

class QTAWSCHIME_EXPORT GetBotRequest : public ChimeRequest {

public:
    GetBotRequest(const GetBotRequest &other);
    GetBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
