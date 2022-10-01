// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_H
#define QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class CreateExtendedSourceServerRequestPrivate;

class QTAWSDRS_EXPORT CreateExtendedSourceServerRequest : public DrsRequest {

public:
    CreateExtendedSourceServerRequest(const CreateExtendedSourceServerRequest &other);
    CreateExtendedSourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtendedSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
