// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERSESSIONREQUEST_H
#define QTAWS_UPDATEMEMBERSESSIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateMemberSessionRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateMemberSessionRequest : public Macie2Request {

public:
    UpdateMemberSessionRequest(const UpdateMemberSessionRequest &other);
    UpdateMemberSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMemberSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
