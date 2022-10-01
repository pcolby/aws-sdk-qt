// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONCALLREQUEST_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONCALLREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationCallRequestPrivate;

class QTAWSCHIME_EXPORT UpdateSipMediaApplicationCallRequest : public ChimeRequest {

public:
    UpdateSipMediaApplicationCallRequest(const UpdateSipMediaApplicationCallRequest &other);
    UpdateSipMediaApplicationCallRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipMediaApplicationCallRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
