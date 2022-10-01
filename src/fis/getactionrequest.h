// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONREQUEST_H
#define QTAWS_GETACTIONREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class GetActionRequestPrivate;

class QTAWSFIS_EXPORT GetActionRequest : public FisRequest {

public:
    GetActionRequest(const GetActionRequest &other);
    GetActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActionRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
