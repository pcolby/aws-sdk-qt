// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRAMREQUEST_H
#define QTAWS_CREATEPROGRAMREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateProgramRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT CreateProgramRequest : public MediaTailorRequest {

public:
    CreateProgramRequest(const CreateProgramRequest &other);
    CreateProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProgramRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
