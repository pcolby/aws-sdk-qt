// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIVESOURCEREQUEST_H
#define QTAWS_UPDATELIVESOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateLiveSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateLiveSourceRequest : public MediaTailorRequest {

public:
    UpdateLiveSourceRequest(const UpdateLiveSourceRequest &other);
    UpdateLiveSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
