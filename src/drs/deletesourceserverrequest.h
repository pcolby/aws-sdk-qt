// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERREQUEST_H
#define QTAWS_DELETESOURCESERVERREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DeleteSourceServerRequestPrivate;

class QTAWSDRS_EXPORT DeleteSourceServerRequest : public DrsRequest {

public:
    DeleteSourceServerRequest(const DeleteSourceServerRequest &other);
    DeleteSourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
