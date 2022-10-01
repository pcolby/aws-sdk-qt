// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCELOCATIONREQUEST_H
#define QTAWS_DELETESOURCELOCATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteSourceLocationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteSourceLocationRequest : public MediaTailorRequest {

public:
    DeleteSourceLocationRequest(const DeleteSourceLocationRequest &other);
    DeleteSourceLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
