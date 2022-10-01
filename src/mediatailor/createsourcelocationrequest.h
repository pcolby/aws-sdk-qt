// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOURCELOCATIONREQUEST_H
#define QTAWS_CREATESOURCELOCATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateSourceLocationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT CreateSourceLocationRequest : public MediaTailorRequest {

public:
    CreateSourceLocationRequest(const CreateSourceLocationRequest &other);
    CreateSourceLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
