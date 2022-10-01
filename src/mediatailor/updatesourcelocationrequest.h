// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCELOCATIONREQUEST_H
#define QTAWS_UPDATESOURCELOCATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateSourceLocationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateSourceLocationRequest : public MediaTailorRequest {

public:
    UpdateSourceLocationRequest(const UpdateSourceLocationRequest &other);
    UpdateSourceLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
