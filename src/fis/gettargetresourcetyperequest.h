// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTARGETRESOURCETYPEREQUEST_H
#define QTAWS_GETTARGETRESOURCETYPEREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class GetTargetResourceTypeRequestPrivate;

class QTAWSFIS_EXPORT GetTargetResourceTypeRequest : public FisRequest {

public:
    GetTargetResourceTypeRequest(const GetTargetResourceTypeRequest &other);
    GetTargetResourceTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTargetResourceTypeRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
