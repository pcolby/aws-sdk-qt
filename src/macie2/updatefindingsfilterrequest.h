// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFILTERREQUEST_H
#define QTAWS_UPDATEFINDINGSFILTERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateFindingsFilterRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateFindingsFilterRequest : public Macie2Request {

public:
    UpdateFindingsFilterRequest(const UpdateFindingsFilterRequest &other);
    UpdateFindingsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
