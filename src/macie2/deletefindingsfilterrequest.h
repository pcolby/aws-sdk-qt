// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGSFILTERREQUEST_H
#define QTAWS_DELETEFINDINGSFILTERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DeleteFindingsFilterRequestPrivate;

class QTAWSMACIE2_EXPORT DeleteFindingsFilterRequest : public Macie2Request {

public:
    DeleteFindingsFilterRequest(const DeleteFindingsFilterRequest &other);
    DeleteFindingsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
