// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTINSTANCETYPESREQUEST_H
#define QTAWS_GETOUTPOSTINSTANCETYPESREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostInstanceTypesRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetOutpostInstanceTypesRequest : public OutpostsRequest {

public:
    GetOutpostInstanceTypesRequest(const GetOutpostInstanceTypesRequest &other);
    GetOutpostInstanceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutpostInstanceTypesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
