// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTREQUEST_H
#define QTAWS_UPDATEBOTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateBotRequestPrivate;

class QTAWSCHIME_EXPORT UpdateBotRequest : public ChimeRequest {

public:
    UpdateBotRequest(const UpdateBotRequest &other);
    UpdateBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
