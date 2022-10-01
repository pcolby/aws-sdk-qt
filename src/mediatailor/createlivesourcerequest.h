// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIVESOURCEREQUEST_H
#define QTAWS_CREATELIVESOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateLiveSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT CreateLiveSourceRequest : public MediaTailorRequest {

public:
    CreateLiveSourceRequest(const CreateLiveSourceRequest &other);
    CreateLiveSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
