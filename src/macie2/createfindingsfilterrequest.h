// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSFILTERREQUEST_H
#define QTAWS_CREATEFINDINGSFILTERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateFindingsFilterRequestPrivate;

class QTAWSMACIE2_EXPORT CreateFindingsFilterRequest : public Macie2Request {

public:
    CreateFindingsFilterRequest(const CreateFindingsFilterRequest &other);
    CreateFindingsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
