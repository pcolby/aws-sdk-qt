// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONREQUEST_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationRequestPrivate;

class QTAWSCHIME_EXPORT UpdateSipMediaApplicationRequest : public ChimeRequest {

public:
    UpdateSipMediaApplicationRequest(const UpdateSipMediaApplicationRequest &other);
    UpdateSipMediaApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
