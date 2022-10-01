// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONCALLREQUEST_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONCALLREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationCallRequestPrivate;

class QTAWSCHIME_EXPORT CreateSipMediaApplicationCallRequest : public ChimeRequest {

public:
    CreateSipMediaApplicationCallRequest(const CreateSipMediaApplicationCallRequest &other);
    CreateSipMediaApplicationCallRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipMediaApplicationCallRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
