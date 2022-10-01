// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREQUEST_H
#define QTAWS_GETFINDINGSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsRequestPrivate;

class QTAWSMACIE2_EXPORT GetFindingsRequest : public Macie2Request {

public:
    GetFindingsRequest(const GetFindingsRequest &other);
    GetFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
