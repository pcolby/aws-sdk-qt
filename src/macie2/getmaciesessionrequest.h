// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMACIESESSIONREQUEST_H
#define QTAWS_GETMACIESESSIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetMacieSessionRequestPrivate;

class QTAWSMACIE2_EXPORT GetMacieSessionRequest : public Macie2Request {

public:
    GetMacieSessionRequest(const GetMacieSessionRequest &other);
    GetMacieSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMacieSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
