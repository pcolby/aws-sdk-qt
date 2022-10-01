// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSFILTERREQUEST_H
#define QTAWS_GETFINDINGSFILTERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsFilterRequestPrivate;

class QTAWSMACIE2_EXPORT GetFindingsFilterRequest : public Macie2Request {

public:
    GetFindingsFilterRequest(const GetFindingsFilterRequest &other);
    GetFindingsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
