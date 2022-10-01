// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSREQUEST_H
#define QTAWS_GETDEDICATEDIPSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetDedicatedIpsRequestPrivate;

class QTAWSSESV2_EXPORT GetDedicatedIpsRequest : public SESv2Request {

public:
    GetDedicatedIpsRequest(const GetDedicatedIpsRequest &other);
    GetDedicatedIpsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
