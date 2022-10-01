// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRAMREQUEST_H
#define QTAWS_DELETEPROGRAMREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteProgramRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteProgramRequest : public MediaTailorRequest {

public:
    DeleteProgramRequest(const DeleteProgramRequest &other);
    DeleteProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProgramRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
