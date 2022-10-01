// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALLOWLISTREQUEST_H
#define QTAWS_UPDATEALLOWLISTREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateAllowListRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateAllowListRequest : public Macie2Request {

public:
    UpdateAllowListRequest(const UpdateAllowListRequest &other);
    UpdateAllowListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
