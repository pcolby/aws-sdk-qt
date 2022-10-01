// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETRESOURCETYPESREQUEST_H
#define QTAWS_LISTTARGETRESOURCETYPESREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class ListTargetResourceTypesRequestPrivate;

class QTAWSFIS_EXPORT ListTargetResourceTypesRequest : public FisRequest {

public:
    ListTargetResourceTypesRequest(const ListTargetResourceTypesRequest &other);
    ListTargetResourceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetResourceTypesRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
