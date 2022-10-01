// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMACIESESSIONREQUEST_H
#define QTAWS_UPDATEMACIESESSIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateMacieSessionRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateMacieSessionRequest : public Macie2Request {

public:
    UpdateMacieSessionRequest(const UpdateMacieSessionRequest &other);
    UpdateMacieSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMacieSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
