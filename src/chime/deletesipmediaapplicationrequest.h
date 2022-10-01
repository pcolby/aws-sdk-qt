// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPMEDIAAPPLICATIONREQUEST_H
#define QTAWS_DELETESIPMEDIAAPPLICATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipMediaApplicationRequestPrivate;

class QTAWSCHIME_EXPORT DeleteSipMediaApplicationRequest : public ChimeRequest {

public:
    DeleteSipMediaApplicationRequest(const DeleteSipMediaApplicationRequest &other);
    DeleteSipMediaApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
