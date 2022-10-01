// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONREQUEST_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationRequestPrivate;

class QTAWSCHIME_EXPORT CreateSipMediaApplicationRequest : public ChimeRequest {

public:
    CreateSipMediaApplicationRequest(const CreateSipMediaApplicationRequest &other);
    CreateSipMediaApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
