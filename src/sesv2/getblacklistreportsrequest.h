// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSREQUEST_H
#define QTAWS_GETBLACKLISTREPORTSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetBlacklistReportsRequestPrivate;

class QTAWSSESV2_EXPORT GetBlacklistReportsRequest : public SESv2Request {

public:
    GetBlacklistReportsRequest(const GetBlacklistReportsRequest &other);
    GetBlacklistReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlacklistReportsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
