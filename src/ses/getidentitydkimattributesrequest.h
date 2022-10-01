// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYDKIMATTRIBUTESREQUEST_H
#define QTAWS_GETIDENTITYDKIMATTRIBUTESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityDkimAttributesRequestPrivate;

class QTAWSSES_EXPORT GetIdentityDkimAttributesRequest : public SesRequest {

public:
    GetIdentityDkimAttributesRequest(const GetIdentityDkimAttributesRequest &other);
    GetIdentityDkimAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityDkimAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
