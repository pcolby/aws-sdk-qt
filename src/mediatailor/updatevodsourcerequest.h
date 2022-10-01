// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVODSOURCEREQUEST_H
#define QTAWS_UPDATEVODSOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateVodSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateVodSourceRequest : public MediaTailorRequest {

public:
    UpdateVodSourceRequest(const UpdateVodSourceRequest &other);
    UpdateVodSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
